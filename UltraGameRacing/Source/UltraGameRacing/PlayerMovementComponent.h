#pragma once

#include "CoreMinimal.h"
#include "ActorMovementComponent.h"
#include "PlayerMovementComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ULTRAGAMERACING_API UPlayerMovementComponent : public UActorMovementComponent
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	float rotationSpeed = 25.0f;

public:	
	UPlayerMovementComponent();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION() virtual void Move(const FInputActionValue& _value) override;
	UFUNCTION() void TurnCamera(const FInputActionValue& _value);
};
