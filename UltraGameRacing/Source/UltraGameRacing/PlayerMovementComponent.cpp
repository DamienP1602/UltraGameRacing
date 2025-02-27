#include "PlayerMovementComponent.h"
#include <Kismet/KismetSystemLibrary.h>
#include <InputActionValue.h>
#include "GameFramework/Character.h"

UPlayerMovementComponent::UPlayerMovementComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}


void UPlayerMovementComponent::BeginPlay()
{
	Super::BeginPlay();
	
	owner = Cast<ACharacter>(GetOwner());
	movement = owner->GetCharacterMovement();
}


void UPlayerMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	Movement();
	owner->AddMovementInput(owner->GetActorForwardVector(), movement->MaxWalkSpeed);
}

void UPlayerMovementComponent::Move(const FInputActionValue& _value)
{
	direction = _value.Get<FVector2D>();
}

void UPlayerMovementComponent::TurnCamera(const FInputActionValue& _value)
{
	UKismetSystemLibrary::PrintString(this, "Camera Turned");
}

void UPlayerMovementComponent::Movement()
{
	//reculer ne fonctionne pas
	if (direction.X == 0)
	{
		if (movement->MaxWalkSpeed >= minMoveSpeed)
			movement->MaxWalkSpeed -= 25;
	}
	else
	{
		if (movement->MaxWalkSpeed <= maxMoveSpeed)
			movement->MaxWalkSpeed += 100;

		const float& _rgt = rotationSpeed * GetWorld()->DeltaTimeSeconds * direction.Y;
		owner->AddControllerYawInput(_rgt);
		owner->AddMovementInput(owner->GetActorForwardVector(), movement->MaxWalkSpeed);
	}
	UKismetSystemLibrary::PrintString(this, direction.ToString());
}
