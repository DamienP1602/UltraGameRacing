// Fill out your copyright notice in the Description page of Project Settings.


#include "GPE/Mushroom.h"

AMushroom::AMushroom()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AMushroom::BeginPlay()
{
	Super::BeginPlay();

}

void AMushroom::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMushroom::Utilise(TObjectPtr<APawn> _pawn)
{
	Boost(_pawn);
}

void AMushroom::Execute(TObjectPtr<APawn> _pawn)
{
	Boost(_pawn);
	mesh->DestroyComponent();
}

void AMushroom::Boost(TObjectPtr<APawn> _pawn)
{

	UE_LOG(LogTemp, Warning, TEXT("Boost"));
	mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	mesh->SetVisibility(false);
	
	FTimerHandle _timerHandle;
	GetWorld()->GetTimerManager().SetTimer(_timerHandle, [&]() {
		UE_LOG(LogTemp, Warning, TEXT("Fin Boost"));
		Destroy();
		}, boostTime, false);
}

