// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerRocket.h"

#include <Kismet/KismetSystemLibrary.h>
#include <EnhancedInputComponent.h>
#include <GPE/Item.h>
#include <GPE/Collectable.h>
#include <GPE/Mushroom.h>
#include <GPE/FinalLine.h>
#include <GPE/Ring.h>
#include "../Component/PlayerInputComponent.h"
#include <GPE/Banane.h>
#include <GPE/GreenShell.h>
#include "GameFramework/CharacterMovementComponent.h"


APlayerRocket::APlayerRocket()
{
	PrimaryActorTick.bCanEverTick = true;
	inputs = CreateDefaultSubobject<UPlayerInputComponent>("Input Component");
	camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	springArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	springArm->SetupAttachment(RootComponent);
	camera->SetupAttachment(springArm);
	AddOwnedComponent(inputs);
}

void APlayerRocket::BeginPlay()
{
	Super::BeginPlay();
	raceSubsystem = GetGameInstance()->GetSubsystem<URace_GameInstanceSubsystem>();
	if (raceSubsystem)
	{
		raceSubsystem->RegisterPlayer(this);
	}
	FTimerHandle _timer;
	FTimerDelegate _timerDelegate = FTimerDelegate::CreateLambda([this]()
		{
			Detect();
		});
	GetWorldTimerManager().SetTimer(_timer, _timerDelegate, 0.2, true);
}

void APlayerRocket::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Movement();
}

void APlayerRocket::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	TObjectPtr<UEnhancedInputComponent> _input = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	if (!_input) return;

	_input->BindAction(inputs->GetMoveAction(), ETriggerEvent::Triggered, this, &APlayerRocket::Move);
	_input->BindAction(inputs->GetMoveAction(), ETriggerEvent::None, this, &APlayerRocket::Move);
	_input->BindAction(inputs->GetLookBackAction(), ETriggerEvent::Triggered, this, &APlayerRocket::TurnCamera);
	_input->BindAction(inputs->GetLookBackAction(), ETriggerEvent::None, this, &APlayerRocket::TurnCamera);
	_input->BindAction(inputs->GetUseAction(), ETriggerEvent::Started, this, &APlayerRocket::UseItem);
}

void APlayerRocket::UseItem(const FInputActionValue& _value)
{

	if (!HasItem()) return;

	ServerUseItem();


}

void APlayerRocket::ServerUseItem_Implementation()
{
	if (!HasItem()) return;

	FVector _offsetToSpawn = FVector(0);
	if (allItems[0]->IsChildOf<AGreenShell>())
		_offsetToSpawn = GetActorLocation() + GetActorForwardVector() * FVector(200.0f, 200.0f, 0.0f);
	if (allItems[0]->IsChildOf<ABanane>())
		_offsetToSpawn = GetActorLocation() - GetActorForwardVector() * FVector(200.0f, 200.0f, 0.0f);

	AItem* _spawnedItem = GetWorld()->SpawnActor<AItem>(allItems[0], _offsetToSpawn, GetActorRotation());
	if (_spawnedItem)
	{
		_spawnedItem->Utilise(this);
		MulticastSpawnItem(_offsetToSpawn, GetActorRotation(), allItems[0]);
		RemoveItem();
	}
}

bool APlayerRocket::ServerUseItem_Validate()
{
	return true;
}

void APlayerRocket::MulticastSpawnItem_Implementation(FVector _spawnLocation, FRotator _spawnRotation, TSubclassOf<AItem> _itemClass)
{
	if (!HasAuthority())
	{
		AItem* _spawnedItem = GetWorld()->SpawnActor<AItem>(_itemClass, _spawnLocation, _spawnRotation);
		if (_spawnedItem)
		{
			_spawnedItem->Utilise(this);
		}
	}
}


void APlayerRocket::NotifyActorBeginOverlap(AActor* _otherActor)
{
	Super::NotifyActorBeginOverlap(_otherActor);
	// _otherActor is the actor that you are collisionning to
	if (AItem* _item = Cast<AItem>(_otherActor))
	{
		_item->Execute(this);
	}
	if (ACollectable* _collectable = Cast<ACollectable>(_otherActor))
	{
		_collectable->Execute(this);
	}

	if (AFinalLine* _finalLine = Cast<AFinalLine>(_otherActor))
		raceSubsystem->AddLap(this);

	if (ARing* _ring = Cast<ARing>(_otherActor))
		raceSubsystem->AddRingCount(this, _ring->GetIndex());
}

void APlayerRocket::Movement()
{
	//si le perso n'avance pas
	if (direction.X == 0)
	{
		if (currentMoveSpeed > 0.0f)
			currentMoveSpeed -= 5;
		else if (currentMoveSpeed < 0.0f)
			currentMoveSpeed += 5;
		isForward ? AddMovementInput(GetActorForwardVector(), currentMoveSpeed)
				  : AddMovementInput(-GetActorForwardVector(), currentMoveSpeed);
		if (currentMoveSpeed > 0.0f)
		{
			const float& _rgt = rotationSpeed * GetWorld()->DeltaTimeSeconds * direction.Y;
			AddControllerYawInput(_rgt);
		}
	}
	else
	{
		//si le perso fait marche arriere
		if (direction.X == -1)
		{
			isForward = false;
			if (currentMoveSpeed < minMoveSpeed)
				currentMoveSpeed += 20;

			const float& _rgt = rotationSpeed * GetWorld()->DeltaTimeSeconds * direction.Y;
			AddControllerYawInput(_rgt);
			AddMovementInput(-GetActorForwardVector(), currentMoveSpeed);


		}
		//si le perso fait marche avant
		else
		{
			isForward = true;
			if (currentMoveSpeed < maxMoveSpeed)
				currentMoveSpeed += 20;

			const float& _rgt = rotationSpeed * GetWorld()->DeltaTimeSeconds * direction.Y;
			AddControllerYawInput(_rgt);
			AddMovementInput(GetActorForwardVector(), currentMoveSpeed);
		}
	}
	//UKismetSystemLibrary::PrintString(this, FString::SanitizeFloat(currentMoveSpeed));
}

void APlayerRocket::Move(const FInputActionValue& _value)
{
	direction = _value.Get<FVector2D>();
}

void APlayerRocket::TurnCamera(const FInputActionValue& _value)
{
	bool isLookingBackward = _value.Get<bool>();
	isLookingBackward ? springArm->SetRelativeRotation(FRotator(0, 180, 0)) : springArm->SetRelativeRotation(FRotator(0, 0, 0));
}

void APlayerRocket::Detect()
{
	bool _hasHit = UKismetSystemLibrary::BoxTraceSingleForObjects(this,
		GetActorLocation(),
		GetActorLocation(),
		boxHalfSize,
		GetActorRotation(),
		layersToDetect,
		true,
		{},
		EDrawDebugTrace::None,
		hitResult,
		true);
	if (!_hasHit) return;

	Bounce(hitResult);

}

void APlayerRocket::Bounce(FHitResult _hitResult)
{
	FVector _normal = _hitResult.ImpactNormal;

	FVector _impactDirection = _hitResult.ImpactPoint - GetActorLocation();

	float _dotProduct = FVector::DotProduct(_impactDirection, _normal);
	_impactDirection = _impactDirection - 2 * _dotProduct * _normal;
	_impactDirection.Normalize();

	_impactDirection.Z = 0;
	GetCharacterMovement()->GroundFriction = 0.0f;
	LaunchCharacter(GetActorForwardVector() * _impactDirection * forceMult, true, true);
	FTimerHandle _timer;
	FTimerDelegate _timerDelegate = FTimerDelegate::CreateLambda([this]()
		{
			GetCharacterMovement()->GroundFriction = 8;
		}
	);
	GetWorldTimerManager().SetTimer(_timer, _timerDelegate, 0.5, false);
}

