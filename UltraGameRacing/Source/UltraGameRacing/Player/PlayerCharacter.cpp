#include "PlayerCharacter.h"
#include "../Component/PlayerMovementComponent.h"
#include "../Component/PlayerInputComponent.h"
#include <Kismet/KismetSystemLibrary.h>
#include <EnhancedInputComponent.h>
#include <GPE/Item.h>
#include <GPE/Collectable.h>
#include <GPE/Mushroom.h>
#include <GPE/FinalLine.h>
#include <GPE/Ring.h>

APlayerCharacter::APlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	movement = CreateDefaultSubobject<UPlayerMovementComponent>("Movement Component");
	inputs = CreateDefaultSubobject<UPlayerInputComponent>("Input Component");
	camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	springArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	springArm->SetupAttachment(RootComponent);
	camera->SetupAttachment(springArm);
	AddOwnedComponent(movement);
	AddOwnedComponent(inputs);
}

void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	raceSubsystem = GetGameInstance()->GetSubsystem<URace_GameInstanceSubsystem>();
	if (raceSubsystem)
	{
		//raceSubsystem->RegisterPlayer(this);
	}

}

void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//UKismetSystemLibrary::PrintString(this,"TARACE");
	AddMovementInput(GetActorForwardVector(),1000.0f);
	//movement->Movement();

}

void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	TObjectPtr<UEnhancedInputComponent> _input = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	if (!_input) return;

	_input->BindAction(inputs->GetMoveAction(), ETriggerEvent::Triggered, movement.Get(), &UPlayerMovementComponent::Move);
	_input->BindAction(inputs->GetMoveAction(), ETriggerEvent::None, movement.Get(), &UPlayerMovementComponent::Move);
	_input->BindAction(inputs->GetLookBackAction(), ETriggerEvent::Triggered, movement.Get(), &UPlayerMovementComponent::TurnCamera);
	_input->BindAction(inputs->GetUseAction(), ETriggerEvent::Started, this, &APlayerCharacter::UseItem);
}

void APlayerCharacter::UseItem(const FInputActionValue& _value)
{
	UKismetSystemLibrary::PrintString(this, "Item Used");
	if (!HasItem()) return;
	AItem* _item = GetWorld()->SpawnActor<AItem>(allItems[0], GetActorLocation(), GetActorRotation());
	//_item->Utilise(this);

	RemoveItem();
}

void APlayerCharacter::NotifyActorBeginOverlap(AActor* _otherActor)
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

	//if (AFinalLine* _finalLine = Cast<AFinalLine>(_otherActor))
		//raceSubsystem->AddLap(this);

	//if (ARing* _ring = Cast<ARing>(_otherActor))
		//raceSubsystem->AddRingCount(this, _ring->GetIndex());
}

