#include "PlayerCharacter.h"
#include "PlayerMovementComponent.h"
#include "PlayerInputComponent.h"
#include <Kismet/KismetSystemLibrary.h>
#include <EnhancedInputComponent.h>

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
	
	
}

void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	TObjectPtr<UEnhancedInputComponent> _input = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	if (!_input) return;

	_input->BindAction(inputs->GetMoveAction(), ETriggerEvent::Triggered, movement.Get(), &UPlayerMovementComponent::Move);
	_input->BindAction(inputs->GetLookBackAction(), ETriggerEvent::Triggered, movement.Get(), &UPlayerMovementComponent::TurnCamera);
	_input->BindAction(inputs->GetUseAction(), ETriggerEvent::Triggered, this, &APlayerCharacter::UseItem);
}

void APlayerCharacter::UseItem(const FInputActionValue& _value)
{
	UKismetSystemLibrary::PrintString(this, "Item Used");
}

void APlayerCharacter::NotifyActorBeginOverlap(AActor* _otherActor)
{
	Super::NotifyActorBeginOverlap(_otherActor);
	// _otherActor is the actor that you are collisionning to
}

