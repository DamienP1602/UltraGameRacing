// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerRocket.h"

#include <Kismet/KismetSystemLibrary.h>
#include <EnhancedInputComponent.h>
#include <GPE/Item.h>
#include <GPE/Collectable.h>
#include <GPE/Mushroom.h>

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
	_input->BindAction(inputs->GetUseAction(), ETriggerEvent::Started, this, &APlayerRocket::UseItem);
}

void APlayerRocket::UseItem(const FInputActionValue& _value)
{
	UKismetSystemLibrary::PrintString(this, "Item Used");
	if (!HasItem()) return;
	AItem* _item = GetWorld()->SpawnActor<AItem>(allItems[0], GetActorLocation(), GetActorRotation());
	//_item->Utilise(this);
	RemoveItem();
}

void APlayerRocket::NotifyActorBeginOverlap(AActor* _otherActor)
{
	Super::NotifyActorBeginOverlap(_otherActor);
	// _otherActor is the actor that you are collisionning to
	if (AItem* _item = Cast<AItem>(_otherActor))
	{
		//_item->Execute(this);
	}
	if (ACollectable* _collectable = Cast<ACollectable>(_otherActor))
	{
		//_collectable->Execute(this);
	}
}

void APlayerRocket::Movement()
{
	//si le perso n'avance pas
	if (direction.X == 0)
	{
		if (currentMoveSpeed > 0.0f)
			currentMoveSpeed -= 10;
		else if (currentMoveSpeed < 0.0f)
			currentMoveSpeed += 10;
		isForward ? AddMovementInput(GetActorForwardVector(), currentMoveSpeed) : AddMovementInput(-GetActorForwardVector(), currentMoveSpeed);
		
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
	UKismetSystemLibrary::PrintString(this, FString::SanitizeFloat(currentMoveSpeed));
}

void APlayerRocket::Move(const FInputActionValue& _value)
{
	direction = _value.Get<FVector2D>();
}

void APlayerRocket::TurnCamera(const FInputActionValue& _value)
{
	UKismetSystemLibrary::PrintString(this, "Camera Turned");
}