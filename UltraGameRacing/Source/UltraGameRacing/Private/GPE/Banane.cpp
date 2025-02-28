// Fill out your copyright notice in the Description page of Project Settings.


#include "GPE/Banane.h"
#include "GameFramework/CharacterMovementComponent.h"

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

void ABanane::Utilise(TObjectPtr<APlayerRocket> _pawn)
{

}

void ABanane::Execute(TObjectPtr<APlayerRocket> _pawn)
{
	initialSpeed = _pawn->GetCharacterMovement()->MaxWalkSpeed;
	_pawn->GetCharacterMovement()->MaxWalkSpeed = initialSpeed - subSpeed;
	pawn = _pawn;
	mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	mesh->SetVisibility(false);
	FTimerHandle _timerHandle;
	GetWorld()->GetTimerManager().SetTimer(_timerHandle, [&]() {
		pawn->GetCharacterMovement()->MaxWalkSpeed = initialSpeed;
		Destroy();
		}, stunTime, false);

}

