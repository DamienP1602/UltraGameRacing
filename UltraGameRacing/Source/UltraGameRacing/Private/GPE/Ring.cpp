// Fill out your copyright notice in the Description page of Project Settings.


#include "GPE/Ring.h"
#include <Subsystem/Race_GameInstanceSubsystem.h>

ARing::ARing()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ARing::BeginPlay()
{
	Super::BeginPlay();
	URace_GameInstanceSubsystem* _raceSubsystem = GetGameInstance()->GetSubsystem<URace_GameInstanceSubsystem>();
	if (_raceSubsystem)
	{
		_raceSubsystem->RegisterRing(this, index);
	}
}

void ARing::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

