// Fill out your copyright notice in the Description page of Project Settings.


#include "Subsystem/Race_GameInstanceSubsystem.h"
#include "../PlayerCharacter.h"

void URace_GameInstanceSubsystem::RegisterPlayer(TObjectPtr<APlayerCharacter> _character)
{
	FPlayersInfos _infos = FPlayersInfos(_character);
}
