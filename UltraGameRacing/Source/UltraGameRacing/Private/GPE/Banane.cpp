// Fill out your copyright notice in the Description page of Project Settings.


#include "GPE/Banane.h"

ABanane::ABanane()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ABanane::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABanane::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABanane::Utilise(TObjectPtr<APawn> _pawn)
{

}

void ABanane::Execute(TObjectPtr<APawn> _pawn)
{
	Destroy();
}

