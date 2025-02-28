// Fill out your copyright notice in the Description page of Project Settings.


#include "Subsystem/Race_GameInstanceSubsystem.h"
#include <PlayerRocket.h>
#include "GPE/Ring.h"
#include <Kismet/KismetSystemLibrary.h>

void URace_GameInstanceSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	GetWorld()->GetTimerManager().SetTimer(positionUpdateTimer, this, &URace_GameInstanceSubsystem::SetAllPosition, 0.5f, true);
}

void URace_GameInstanceSubsystem::RegisterPlayer(TObjectPtr<APlayerRocket> _character)
{
	FPlayersInfos _infos = FPlayersInfos(_character);

	players.Add(_infos);
	UKismetSystemLibrary::PrintString(this, "Register Player => " + _character->GetName());
}

void URace_GameInstanceSubsystem::RegisterRing(TObjectPtr<ARing> _ring, int _id)
{
	FRingInfos _ringInfos = FRingInfos(_ring, _id);
	rings.Add(_ringInfos);
	ringCount++;
	UKismetSystemLibrary::PrintString(this, "Register");
}

FPlayersInfos URace_GameInstanceSubsystem::GetPlayersInfosByName(const FString& _name)
{
	for (int _i = 0; _i < playerCount; _i++)
	{
		if (players[_i].name == _name)
			return players[_i];
	}

	return FPlayersInfos();
}

FRingInfos URace_GameInstanceSubsystem::GetRingInfosByIndex(const int& _index)
{
	for (int _i = 0; _i < ringCount; _i++)
	{
		if (rings[_i].index == _index)
			return rings[_i];
	}
	return FRingInfos();
}

TObjectPtr<APlayerRocket> URace_GameInstanceSubsystem::GetPlayersByName(const FString& _name)
{
	FPlayersInfos _playerInfos = GetPlayersInfosByName(_name);
	if (_playerInfos.character != nullptr)
	{
		return _playerInfos.character;
	}
	return nullptr;
}

TObjectPtr<ARing> URace_GameInstanceSubsystem::GetRingByIndex(const int& _index)
{
	FRingInfos _ringInfos = GetRingInfosByIndex(_index);
	if (_ringInfos.ring != nullptr)
	{
		return _ringInfos.ring;
	}
	return nullptr;
}

void URace_GameInstanceSubsystem::SetAllPosition()
{
	if (players.Num() <= 1)
		return;


	TArray<int> _assignedPositions;
	_assignedPositions.Init(-1, players.Num());

	for (int _i = 0; _i < players.Num(); _i++)
	{
		int _rank = 1;

		for (int _j = 0; _j < players.Num(); _j++)
		{
			if (_i == _j) continue;

			if (players[_j].lapCount > players[_i].lapCount || // pas le meme lap
				(players[_j].lapCount == players[_i].lapCount && players[_j].ringCount > players[_i].ringCount) || // meme lap mais pas meme ring
				(players[_j].lapCount == players[_i].lapCount && players[_j].ringCount == players[_i].ringCount && // meme lap et meme ring
					players[_j].character && players[_i].character &&
					FVector::Dist(players[_j].character->GetActorLocation(), GetNextRing(players[_j])->GetActorLocation()) <
					FVector::Dist(players[_i].character->GetActorLocation(), GetNextRing(players[_j])->GetActorLocation())))
			{
				_rank++;
			}
		}

		_assignedPositions[_i] = _rank;
	}

	for (int i = 0; i < players.Num(); i++)
	{
		players[i].currentPosition = _assignedPositions[i];
	}
}

TObjectPtr<ARing> URace_GameInstanceSubsystem::GetNextRing(const FPlayersInfos& playerInfos)
{
	if (rings.Num() == 0)
		return nullptr;

	int _nextRingIndex = (playerInfos.ringCount + 1) % rings.Num();

	return GetRingByIndex(_nextRingIndex);
}

void URace_GameInstanceSubsystem::AddLap(TObjectPtr<APlayerRocket> _character)
{
	int _count = players.Num();
	for (int _i = 0; _i < _count; _i++)
	{
		if (players[_i].character == _character) {
			if (players[_i].ringCount == ringCount) {
				players[_i].lapCount += 1;
				players[_i].ringCount = 0;
				UKismetSystemLibrary::PrintString(this, FString::FromInt(players[_i].lapCount));
				UKismetSystemLibrary::PrintString(this, FString::FromInt(players[_i].ringCount));
				return;

			}

		}

	}
}

void URace_GameInstanceSubsystem::AddRingCount(TObjectPtr<APlayerRocket> _character, const int& _indexRingCollide)
{
	int _count = players.Num();

	for (int _i = 0; _i < _count; _i++)
	{
		if (players[_i].character == _character) {
			int _nextRingIndex = players[_i].ringCount + 1;
			if (_nextRingIndex != _indexRingCollide) return;


			players[_i].ringCount = _indexRingCollide;
			UKismetSystemLibrary::PrintString(this, "AddRing");
			return;

		}

	}
}
