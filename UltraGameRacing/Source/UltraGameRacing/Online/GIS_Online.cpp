#include "GIS_Online.h"

UGIS_Online::UGIS_Online()
{
	serverName = "ServerDemo";
	sessionName = "Unknown";
	maxPlayersCount = 4;
	levelPath = "LVL_Level";
	lobbyLevelPath = "LVL_Lobby";
	mainMenuLevelPath = "LVL_MainMenu";
	ipAddress = "";

	online = nullptr;
	session = nullptr;
	steamID = nullptr;
	sessionSettings = MakeShareable(new FOnlineSessionSettings());
}

void UGIS_Online::Initialize(FSubsystemCollectionBase& Collection)
{
	LOG("UGIS_Online => Initialize", Green);

	online = IOnlineSubsystem::Get();
	if (!online)
	{
		LOG("Error => Online cannor be instanced !", Red);
		return;
	}
	LOG("You are now online on " + online->GetSubsystemName().ToString(), Green);

	session = online->GetSessionInterface();
	if (session)
	{
		//Sessions
		session->OnCreateSessionCompleteDelegates.AddUObject(this, &UGIS_Online::OnCreateSessionCompleted);
		session->OnFindSessionsCompleteDelegates.AddUObject(this, &UGIS_Online::OnFindSessionsCompleted);
		session->OnJoinSessionCompleteDelegates.AddUObject(this, &UGIS_Online::OnJoinSessionCompleted);
		session->OnRegisterPlayersCompleteDelegates.AddUObject(this, &UGIS_Online::OnRegisteredCompleted);
		session->OnStartSessionCompleteDelegates.AddUObject(this, &UGIS_Online::OnStartSessionCompleted);
		session->OnUpdateSessionCompleteDelegates.AddUObject(this, &UGIS_Online::OnUpdateSessionCompleted);
		session->OnEndSessionCompleteDelegates.AddUObject(this, &UGIS_Online::OnEndSessionCompleted);
		session->OnDestroySessionCompleteDelegates.AddUObject(this, &UGIS_Online::OnDestroySessionCompleted);

		// Failures
		session->OnSessionFailureDelegates.AddUObject(this, &UGIS_Online::OnSessionFailure);
		GEngine->OnNetworkFailure().AddUObject(this, &UGIS_Online::OnNetworkFailure);
	}

	if (IOnlineIdentityPtr _interface = online->GetIdentityInterface())
	{
		steamID = _interface->GetUniquePlayerId(0);
		LOG("AUGIS_Online => Init SteamID : " + steamID->ToString(), Magenta);
	}
}

void UGIS_Online::Deinitialize()
{
	LOG("UGIS_Online => Deinitialize", Red);
}

void UGIS_Online::InitSessionSettings()
{
	if (!sessionSettings) return;

	//Peut rejoindre
	sessionSettings->bAllowInvites = true;
	//Peut rejoindre pendant la partie
	sessionSettings->bAllowJoinInProgress = true;
	//Peut rejoindre
	sessionSettings->bAllowJoinViaPresence = true;
	//Peut rejoindre une partie avec un ami en commun
	sessionSettings->bAllowJoinViaPresenceFriendsOnly = false;

	sessionSettings->bIsDedicated = false;

	sessionSettings->bUseLobbiesIfAvailable = true;

	sessionSettings->bUsesPresence = true;

	sessionSettings->bShouldAdvertise = true;

	sessionSettings->NumPrivateConnections = 0;
	//Nombre de connexion maximum
	sessionSettings->NumPublicConnections = maxPlayersCount;
	//Uniquement en LAN => reseau local, connexion avec steam ou non
	sessionSettings->bIsLANMatch = IS_LAN(online);

	sessionSettings->Set(FName("SERVER_NAME"), serverName.ToString(), EOnlineDataAdvertisementType::ViaOnlineServiceAndPing);
	sessionSettings->Set(FName("LEVEL_NAME"), levelPath, EOnlineDataAdvertisementType::ViaOnlineServiceAndPing);
	sessionSettings->Set(FName("CURRENT_PLAYER"), 1, EOnlineDataAdvertisementType::ViaOnlineServiceAndPing);
	sessionSettings->Set(FName("MAX_PLAYER"), 4, EOnlineDataAdvertisementType::ViaOnlineServiceAndPing);
	sessionSettings->Set(FName("PING"), 8, EOnlineDataAdvertisementType::ViaOnlineServiceAndPing);
}

void UGIS_Online::OnCreateSessionCompleted(FName _sessionName, bool _wasSuccessful)
{
	LOG("UGIS_Online => OnCreateSessionCompleted", Green);

	if (!_wasSuccessful)
	{
		ERROR("Error => " + _sessionName.ToString() + "Wasn't created successfuly !");
	}

	sessionName = _sessionName;
	RegisterPlayer();
}

void UGIS_Online::OnFindSessionsCompleted(bool _wasSuccessful)
{
	LOG("UGIS_Online => OnFindSessionsCompleted", Green);

	if (!_wasSuccessful)
	{
		ERROR("Error => The session search as failed");
		//TODO broadcast
		return;
	}

	if (!sessionSearch) return;

	const TArray<FOnlineSessionSearchResult> _results = sessionSearch->SearchResults;
	const int32& _resultsCount = _results.Num();

	if (_resultsCount <= 0)
	{
		ERROR("Error => No session found !");
		return;
	}

	TArray<FSessionData> _sessionsData;
	for (FOnlineSessionSearchResult _result : _results)
	{
		if (!_result.IsValid()) continue;

		const FSessionData& _data = FSessionData(_result.Session.SessionSettings);
		LOG("SessionData => " + _data.serverName, Green);

		_sessionsData.Add(_data);
	}
	onSessionsFound.Broadcast(_sessionsData);
}

void UGIS_Online::OnJoinSessionCompleted(FName _sessionName, const EOnJoinSessionCompleteResult::Type _result)
{
	LOG("UGIS_Online => OnJoinSessionCompleted", Green);

	if (_result != EOnJoinSessionCompleteResult::Success)
	{
		ERROR("Error => " + FString(LexToString(_result)));
		return;
	}

	sessionName = _sessionName;

	//Permet de bien rejoindre une session => IMPORTANT
	session->GetResolvedConnectString(sessionName, ipAddress);

	if (APlayerController* _playerController = GetGameInstance()->GetFirstLocalPlayerController())
	{
		LOG("The client travels on the server : " + levelPath, Green);
		_playerController->ClientTravel(ipAddress, ETravelType::TRAVEL_Absolute, false);
	}
}

void UGIS_Online::OnRegisteredCompleted(FName _sessionName, const TArray<FUniqueNetIdRef>& _allIDs, bool _wasSuccessful)
{
	LOG("UGIS_Online => OnRegisteredCompleted", Green);

	if (!_wasSuccessful)
	{
		ERROR("Error => The registration failed");
		return;
	}

	sessionName = _sessionName;

	//On peut en enregister plusieurs à la fois => un tableau
	//Pour chaque client
	for (const FUniqueNetIdRef& _netIdRef : _allIDs)
	{
		const FUniqueNetId& _netId = _netIdRef.Get();
		const FString& _playerName = online->GetIdentityInterface()->GetPlayerNickname(_netId);

		//Available only connected on Steam
		if (IOnlinePresencePtr _sessionPresence = online->GetPresenceInterface())
		{
			TSharedPtr<FOnlineUserPresence> _userPresence;

			if (_sessionPresence->GetCachedPresence(_netId, _userPresence) == EOnlineCachedResult::Success)
			{
				const FPlayerData& _playerData = FPlayerData(_playerName, steamID, *_userPresence);
				//TODO Broadcast
			}
		}
		else
		{
			const FPlayerData& _playerData = FPlayerData(_playerName, steamID);
		}
	}
}

void UGIS_Online::OnStartSessionCompleted(FName _sessionName, bool _wasSuccessful)
{
	LOG("UGIS_Online => OnStartSessionCompleted", Green);

	if (!_wasSuccessful)
	{
		ERROR("Error => The start sessions failed !");
	}

	sessionName = _sessionName;
	LOG("Session => \"" + sessionName.ToString() + "\" started !", Green);

	//Lancement de la partie par le server
	GetWorld()->ServerTravel("/Game/Levels/" + levelPath + "?listen");
	// ?listen => lance la session en Listen Server
}

void UGIS_Online::OnUpdateSessionCompleted(FName _sessionName, bool _wasSuccessful)
{
	LOG("UGIS_Online => OnUpdateSessionCompleted", Green);

	if (!_wasSuccessful)
	{
		ERROR("Error => The update sessions failed !");
	}
}

void UGIS_Online::OnEndSessionCompleted(FName _sessionName, bool _wasSuccessful)
{
	LOG("UGIS_Online => OnEndSessionCompleted", Green);

	if (!_wasSuccessful)
	{
		ERROR("Error => The end sessions failed !");
	}

	GetWorld()->ServerTravel("/Game/Levels/" + lobbyLevelPath + "?listen");
}

void UGIS_Online::OnDestroySessionCompleted(FName _sessionName, bool _wasSuccessful)
{
	LOG("UGIS_Online => OnDestroySessionCompleted", Green);

	if (!_wasSuccessful)
	{
		ERROR("Error => The destroy sessions failed !");
	}

	GetWorld()->ServerTravel("/Game/Levels/" + mainMenuLevelPath + "?listen");
}

void UGIS_Online::OnSessionFailure(const FUniqueNetId& _id, ESessionFailure::Type _failureType)
{
	ERROR("Error => Session Failure !");
}

void UGIS_Online::OnNetworkFailure(UWorld* _world, UNetDriver* _driver, ENetworkFailure::Type _failureType, const FString& _error)
{
	ERROR("Error => " + _error + " (" + ENetworkFailure::ToString(_failureType) + ")");
}

void UGIS_Online::CreateSession()
{
	LOG("UGIS_Online => CreateSessin", Magenta);

	sessionName = FName(serverName.ToString() + "_" + steamID->ToString());

	// On supprime pour éviter de créer pleins de sessions avec le même nom
	if (session->GetNamedSession(sessionName))
	{
		DestroySession();
		return;
	}

	InitSessionSettings();
	// Faire attention à comment on utilise nos valeurs
	session->CreateSession(0, sessionName, *sessionSettings.Get());
}

void UGIS_Online::UpdateSession()
{
	LOG("UGIS_Online => UpdateSession", Magenta);
	FOnlineSessionSettings _newSettings = *sessionSettings.Get();
	session->UpdateSession(sessionName, _newSettings);
	sessionSettings = MakeShared<FOnlineSessionSettings>(_newSettings);
}

void UGIS_Online::FindSessions()
{
	LOG("UGIS_Online => FindSessions", Magenta);

	if (serverName.IsNone()) return;

	sessionSearch = MakeShareable(new FOnlineSessionSearch());
	sessionSearch->bIsLanQuery = IS_LAN(online);
	sessionSearch->MaxSearchResults = 10;

	//ma recherche de session vérifie les sessions qui cherchent des joueurs pour rejoindre
	sessionSearch->QuerySettings.Set(SEARCH_PRESENCE, true, EOnlineComparisonOp::Equals);
	session->FindSessions(0, sessionSearch.ToSharedRef());
}

void UGIS_Online::CancelFindSessions()
{
	LOG("UGIS_Online => CancelFindSessions", Magenta);

	session->CancelFindSessions();
}

void UGIS_Online::JoinSession(const FName& _sessionName, const FString& _levelPath, const int _index)
{
	LOG("UGIS_Online => JoinSession", Magenta);

	sessionName = _sessionName;
	levelPath = _levelPath;

	const TArray<FOnlineSessionSearchResult>& _result = sessionSearch->SearchResults;
	if (_index < 0 || _index >= _result.Num())
	{
		ERROR("ERROR => Impossible to join the session n" + FString::FromInt(_index) + " !");
	}

	session->JoinSession(0, sessionName, _result[_index]);
}

void UGIS_Online::RegisterPlayer()
{
	LOG("UGIS_Online => init SteamID : " + steamID->ToString(), Magenta);

	if (!steamID)
	{
		LOG("UGIS_Online => failed init SteamID", Magenta);
	}
	session->RegisterPlayer(sessionName, *steamID, false); //TODO modify on invite
}

void UGIS_Online::StartSession()
{
	LOG("UGIS_Online => StartSession", Magenta);
	session->StartSession(sessionName);
}

void UGIS_Online::EndSession()
{
	LOG("UGIS_Online => EndSession", Magenta);
	session->EndSession(sessionName);
}

void UGIS_Online::DestroySession()
{
	LOG("UGIS_Online => DestroySession", Magenta);
	session->DestroySession(sessionName);
}
