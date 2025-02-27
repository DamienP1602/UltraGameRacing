#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputMappingContext.h"
#include <GameFramework/SpringArmComponent.h>
#include <Camera/CameraComponent.h>
#include "PlayerCharacter.generated.h"

class UPlayerMovementComponent;
class UPlayerInputComponent;
class AItem;

UCLASS()
class ULTRAGAMERACING_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere)
	TObjectPtr<UPlayerMovementComponent> movement = nullptr;
	UPROPERTY(EditAnywhere)
	TObjectPtr<UPlayerInputComponent> inputs = nullptr;
	UPROPERTY(EditAnywhere)
	TObjectPtr<UCameraComponent> camera = nullptr;
	UPROPERTY(EditAnywhere) 
	TObjectPtr<USpringArmComponent> springArm = nullptr;
	UPROPERTY(VisibleAnywhere)
	TArray<TSubclassOf<AItem>> allItems;

public:

	FORCEINLINE TObjectPtr<UPlayerMovementComponent> GetMovement() { return movement; }
	FORCEINLINE void AddItem(TSubclassOf<AItem> _itemToAdd)
	{
		if (allItems.Num() > 2) return;
		allItems.Add(_itemToAdd);
	}
	FORCEINLINE void RemoveItem()
	{
		if (allItems.Num() < 1) return;
		allItems.RemoveAt(0);
	}

public:
	APlayerCharacter();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION() void UseItem(const FInputActionValue& _value);

	virtual void NotifyActorBeginOverlap(AActor* _otherActor) override;
};
