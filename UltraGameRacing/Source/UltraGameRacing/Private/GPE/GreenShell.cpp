// Fill out your copyright notice in the Description page of Project Settings.


#include "GPE/GreenShell.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetSystemLibrary.h"

AGreenShell::AGreenShell()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AGreenShell::BeginPlay()
{
	Super::BeginPlay();
    moveDirection = GetActorForwardVector();

}

void AGreenShell::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    UpdateDirection(DeltaTime);
	Move(DeltaTime);
	Rotate(DeltaTime);

}

void AGreenShell::Move(float DeltaTime)
{

    FVector _currentLoc = GetActorLocation();
	FVector _newLoc = _currentLoc + moveDirection * moveSpeed * DeltaTime;
	SetActorLocation(_newLoc);
}




void AGreenShell::Rotate(float DeltaTime)
{

	FRotator _currentRot = mesh->GetRelativeRotation();
	FRotator _newRot = _currentRot + FRotator(0, 1, 0) * rotationSpeed * DeltaTime;
	mesh->SetRelativeRotation(_newRot);

}

void AGreenShell::UpdateDirection(float DeltaTime)
{
    FVector _start = GetActorLocation();
    FVector _end = _start + moveDirection * moveSpeed * DeltaTime;

    FHitResult _hitResult;
    TArray<TObjectPtr<AActor>> _actorsToIgnore;

    bool _hit = UKismetSystemLibrary::LineTraceSingleForObjects(
        GetWorld(),
        _start,
        _end,
        layersToDetect,
        false,
        _actorsToIgnore,
        EDrawDebugTrace::ForDuration,
        _hitResult,
        true
    );

    if (!_hit)
        return;
    
    FVector _normal = _hitResult.ImpactNormal;

    float _dotProduct = FVector::DotProduct(moveDirection, _normal);
    moveDirection = moveDirection - 2 * _dotProduct * _normal;
    moveDirection.Normalize();
    
}

void AGreenShell::Utilise(TObjectPtr<APlayerRocket> _pawn)
{
    
}

void AGreenShell::Execute(TObjectPtr<APlayerRocket> _pawn)
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

