#pragma once

#include "CoreMinimal.h"
#include "ActorMovementComponent.h"
#include <GameFramework/CharacterMovementComponent.h>
#include "PlayerMovementComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ULTRAGAMERACING_API UPlayerMovementComponent : public UActorMovementComponent
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	float rotationSpeed = 50.0f;
	UPROPERTY(EditAnywhere)
	float maxMoveSpeed = 1000.0f;
	UPROPERTY(EditAnywhere)
	float minMoveSpeed = 0.0f;
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UCharacterMovementComponent> movement = nullptr;
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<ACharacter> owner = nullptr;
	UPROPERTY()
	FVector2D direction;

public:	
	UPlayerMovementComponent();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION() virtual void Move(const FInputActionValue& _value) override;
	UFUNCTION() void TurnCamera(const FInputActionValue& _value);
	void Movement();
};
