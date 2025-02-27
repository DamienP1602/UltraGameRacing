#include "PlayerMovementComponent.h"
#include <Kismet/KismetSystemLibrary.h>
#include <InputActionValue.h>
UPlayerMovementComponent::UPlayerMovementComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}


void UPlayerMovementComponent::BeginPlay()
{
	Super::BeginPlay();
}


void UPlayerMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UPlayerMovementComponent::Move(const FInputActionValue& _value)
{
	APawn* _owner = Cast<APawn>(GetOwner());

	const FVector2D& _dir = _value.Get<FVector2D>();

	if (_dir.X == 0) return;

	const FVector& _fwd = _owner->GetActorLocation() + _owner->GetActorForwardVector() * moveSpeed * GetWorld()->DeltaTimeSeconds * _dir.X;
	const float& _rgt = rotationSpeed * GetWorld()->DeltaTimeSeconds * _dir.Y;
	_owner->SetActorLocation(_fwd);
	_owner->AddControllerYawInput(_rgt);
	UKismetSystemLibrary::PrintString(this, FString::SanitizeFloat(_rgt));
}

void UPlayerMovementComponent::TurnCamera(const FInputActionValue& _value)
{
	UKismetSystemLibrary::PrintString(this, "Camera Turned");
}