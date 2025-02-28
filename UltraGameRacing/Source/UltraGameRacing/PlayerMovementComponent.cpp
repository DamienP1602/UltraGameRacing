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
	movement->MaxWalkSpeed = 0.0f;
}


void UPlayerMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	Movement();
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
	//si le perso n'avance pas
	if (direction.X == 0)
	{
		if (movement->MaxWalkSpeed > 0.0f)
			movement->MaxWalkSpeed -= 10;
		else if (movement->MaxWalkSpeed < 0.0f)
			movement->MaxWalkSpeed += 10;
		isForward ? owner->AddMovementInput(owner->GetActorForwardVector(), movement->MaxWalkSpeed) : owner->AddMovementInput(-owner->GetActorForwardVector(), movement->MaxWalkSpeed);
	}
	else
	{
		//si le perso fait marche arriere
		if (direction.X == -1)
		{
			isForward = false;
			if (movement->MaxWalkSpeed < minMoveSpeed)
				movement->MaxWalkSpeed += 25;

			const float& _rgt = rotationSpeed * GetWorld()->DeltaTimeSeconds * direction.Y;
			owner->AddControllerYawInput(_rgt);
			owner->AddMovementInput(-owner->GetActorForwardVector(), movement->MaxWalkSpeed);
		}
		//si le perso fait marche avant
		else
		{
			isForward = true;
			if (movement->MaxWalkSpeed < maxMoveSpeed)
				movement->MaxWalkSpeed += 25;

			const float& _rgt = rotationSpeed * GetWorld()->DeltaTimeSeconds * direction.Y;
			owner->AddControllerYawInput(_rgt);
			owner->AddMovementInput(owner->GetActorForwardVector(), movement->MaxWalkSpeed);
		}
	}
}
