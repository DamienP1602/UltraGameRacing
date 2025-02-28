// Fill out your copyright notice in the Description page of Project Settings.


#include "GPE/Mushroom.h"
#include "GameFramework/CharacterMovementComponent.h"

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

void AMushroom::Utilise(TObjectPtr<APlayerRocket> _pawn)
{
	Boost(_pawn);
}

void AMushroom::Execute(TObjectPtr<APlayerRocket> _pawn)
{
	Boost(_pawn);
	//mesh->DestroyComponent();
}

void AMushroom::Boost(TObjectPtr<APlayerRocket> _pawn)
{

	UE_LOG(LogTemp, Warning, TEXT("Boost"));

	initialSpeed = _pawn->GetCharacterMovement()->MaxWalkSpeed;
	_pawn->GetCharacterMovement()->MaxWalkSpeed = initialSpeed + addingSpeed;
	pawn = _pawn;
	FTimerHandle _timerHandle;
	GetWorld()->GetTimerManager().SetTimer(_timerHandle, [&]() {
		UE_LOG(LogTemp, Warning, TEXT("Fin Boost"));
		pawn->GetCharacterMovement()->MaxWalkSpeed = initialSpeed;
		Destroy();
		}, boostTime, false);
}

