// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"


#include "Race_GameInstanceSubsystem.generated.h"

class APlayerRocket;
class ARing;

USTRUCT()
struct FPlayersInfos
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere) FString name = "Unknown";
	UPROPERTY(EditAnywhere) int currentPosition = -1;
	UPROPERTY(EditAnywhere) int ringCount = 0;
	UPROPERTY(EditAnywhere) int lapCount = 0;
	UPROPERTY(EditAnywhere) TObjectPtr<APlayerRocket> character = nullptr;

	FPlayersInfos(){}

	FPlayersInfos(TObjectPtr<APlayerRocket> _charcacter) {
		character = _charcacter;
		//name = character->GetName();
	}
};

USTRUCT()
struct FRingInfos
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere) int index = -1;
	UPROPERTY(EditAnywhere) TObjectPtr<ARing> ring = nullptr;

	FRingInfos() {}

	FRingInfos(TObjectPtr<ARing> _ring, const int& _index) {
		ring = _ring;
		index = _index;
	}
};


UCLASS()
class ULTRAGAMERACING_API URace_GameInstanceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere) TArray<FPlayersInfos> players;
	UPROPERTY(EditAnywhere) TArray<FRingInfos> rings;
	UPROPERTY(EditAnywhere) int ringCount = 0;
	UPROPERTY(EditAnywhere) int playerCount = 0;
	UPROPERTY() FTimerHandle positionUpdateTimer;
	
public:
	FORCEINLINE int GetPlayerCount() const { return playerCount; }
	FORCEINLINE int GetRingCount() const { return ringCount; }

public:

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	void RegisterPlayer(TObjectPtr<APlayerRocket> _character);
	void RegisterRing(TObjectPtr<ARing> _ring, int _index);
	
	FPlayersInfos GetPlayersInfosByName(const FString& _name);
	FRingInfos GetRingInfosByIndex(const int& _index);

	TObjectPtr<APlayerRocket> GetPlayersByName(const FString& _name);
	TObjectPtr<ARing> GetRingByIndex(const int& _index);
	
	void SetAllPosition();
	TObjectPtr<ARing> GetNextRing(const FPlayersInfos& playerInfos);

	void AddLap(TObjectPtr<APlayerRocket> _character);
	void AddRingCount(TObjectPtr<APlayerRocket> _character, const int& _indexRingCollide);

};
