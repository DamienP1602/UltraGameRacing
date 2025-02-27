#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "OnlineSubsystem.h"
#include "OnlineSessionSettings.h"
#include "Online/OnlineSessionNames.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "Interfaces/OnlineIdentityInterface.h"
#include <Interfaces/OnlinePresenceInterface.h>
#include <Kismet/KismetSystemLibrary.h>
#include "GIS_Online.generated.h"

/// <summary>
/// Macros
/// </summary>
#define LOG_C(msg,color) UKismetSystemLibrary::PrintString(this,msg,true,true,color,10.0f)
#define LOG_C_D(msg,color,duration) UKismetSystemLibrary::PrintString(this,msg,true,true,color,duration)
#define LOG(msg, color) LOG_C(msg, FColor::color)
#define ERROR(msg) LOG(msg,Red)
#define IS_LAN(online) online->GetSubsystemName() == "NULL"

USTRUCT()
struct FPlayerData
{
	GENERATED_BODY()

	UPROPERTY() FString playerName;
	FUniqueNetIdPtr steamID;
	FOnlineUserPresence userPresence;

	FPlayerData() = default;
	FPlayerData(const FString& _name, const FUniqueNetIdPtr& _steamID, const FOnlineUserPresence& _userPresence = FOnlineUserPresence())
	{
		playerName = _name;
		steamID = _steamID;
		userPresence = _userPresence;
	}
};

USTRUCT()
struct FSessionData
{
	GENERATED_BODY()

	UPROPERTY() FString serverName;
	UPROPERTY() FString levelName;
	UPROPERTY() int32 playersCount;
	UPROPERTY() int32 maxPlayersCount;
	UPROPERTY() int32 ping;
	UPROPERTY() TArray<FPlayerData> allPlayersData;

	FSessionData() = default;
	FSessionData(const FOnlineSessionSettings& _settings)
	{
		_settings.Get(FName("SERVER_NAME"), serverName);
		_settings.Get(FName("LEVEL_NAME"), levelName);
		InitIntValue(_settings, "CURRENT_PLAYER", playersCount);
		InitIntValue(_settings, "MAX_PLAYER", maxPlayersCount);
		InitIntValue(_settings, "PING", ping);

	}

private:
	void InitIntValue(const FOnlineSessionSettings& _settings, const FName& _key, int32& _value)
	{
		FString _valueText;
		_settings.Get(_key, _value);
		_value = FCString::Atoi(*_valueText);
	}
};


UCLASS()
class ULTRAGAMERACING_API UGIS_Online : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSessionsFound, TArray<FSessionData>, _sessionsFound);
	FOnSessionsFound onSessionsFound;

	UPROPERTY() FName serverName;
	UPROPERTY() FName sessionName;
	UPROPERTY() int32 maxPlayersCount;
	UPROPERTY() FString levelPath;
	UPROPERTY() FString lobbyLevelPath;
	UPROPERTY() FString mainMenuLevelPath;
	UPROPERTY() FString ipAddress;

	IOnlineSubsystem* online;
	IOnlineSessionPtr session;
	FUniqueNetIdPtr steamID;
	TSharedPtr<FOnlineSessionSettings> sessionSettings;
	TSharedPtr<FOnlineSessionSearch> sessionSearch;

public:
	UGIS_Online();

public:
	FORCEINLINE FName GetSessionName() const { return sessionName; }
	FORCEINLINE IOnlineSessionPtr GetSession() const { return session; }
	FORCEINLINE FString GetLevelPath() const { return levelPath; }
	FORCEINLINE FString GetMaxPlayerCount() const { return FString::FromInt(maxPlayersCount); }
	FORCEINLINE FOnSessionsFound& OnSessionFound() { return onSessionsFound; }

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

private:
	void InitSessionSettings();

protected:
	void OnCreateSessionCompleted(FName _sessionName, bool _wasSuccessful);
	void OnFindSessionsCompleted(bool _wasSuccessful);
	void OnJoinSessionCompleted(FName _sessionName, const EOnJoinSessionCompleteResult::Type _result);
	void OnRegisteredCompleted(FName _sessionName, const TArray<FUniqueNetIdRef>& _allIDs, bool _wasSuccessful);
	void OnStartSessionCompleted(FName _sessionName, bool _wasSuccessful);
	void OnUpdateSessionCompleted(FName _sessionName, bool _wasSuccessful);
	void OnEndSessionCompleted(FName _sessionName, bool _wasSuccessful);
	void OnDestroySessionCompleted(FName _sessionName, bool _wasSuccessful);

	void OnSessionFailure(const FUniqueNetId& _id, ESessionFailure::Type _failureType);
	void OnNetworkFailure(UWorld* _world, UNetDriver* _driver, ENetworkFailure::Type _failureType, const FString& _error);

public:
	UFUNCTION() void CreateSession();
	UFUNCTION() void UpdateSession();
	UFUNCTION() void FindSessions();
	UFUNCTION() void CancelFindSessions();
	UFUNCTION() void JoinSession(const FName& _sessionName, const FString& _levelPath, const int _index);
	UFUNCTION() void RegisterPlayer();
	UFUNCTION() void StartSession();
	UFUNCTION() void EndSession();
	UFUNCTION() void DestroySession();

};
