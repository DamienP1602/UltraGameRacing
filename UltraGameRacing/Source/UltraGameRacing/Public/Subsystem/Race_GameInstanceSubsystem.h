// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Race_GameInstanceSubsystem.generated.h"

class APlayerCharacter;

USTRUCT()
struct FPlayersInfos
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere) FString name = "Unknown";
	UPROPERTY(EditAnywhere) int currentPosition = -1;
	UPROPERTY(EditAnywhere) int ringCount = 0;
	UPROPERTY(EditAnywhere) int lapCount = 0;
	UPROPERTY(EditAnywhere) TObjectPtr<APlayerCharacter> character = nullptr;

	FPlayersInfos(){}

	FPlayersInfos(TObjectPtr<APlayerCharacter> _charcacter) {
		character = _charcacter;
		name = character->GetName();
	}
};


UCLASS()
class ULTRAGAMERACING_API URace_GameInstanceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere) TArray<FPlayersInfos> players;
	UPROPERTY(EditAnywhere) int ringCount = 0;
	


public:
	void RegisterPlayer(TObjectPtr<APlayerCharacter> _character);
	

	
};
