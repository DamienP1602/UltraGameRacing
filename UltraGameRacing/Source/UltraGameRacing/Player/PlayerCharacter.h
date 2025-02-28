#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputMappingContext.h"
#include <GameFramework/SpringArmComponent.h>
#include <GameFramework/CharacterMovementComponent.h>
#include <Camera/CameraComponent.h>

#include <Subsystem/Race_GameInstanceSubsystem.h>

#include "../Component/PlayerInputComponent.h"

#include "PlayerCharacter.generated.h"

class UPlayerMovementComponent;
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

	UPROPERTY()TObjectPtr<URace_GameInstanceSubsystem> raceSubsystem = nullptr;

public:
	FORCEINLINE bool HasItem() { return allItems.Num() > 0; }
	FORCEINLINE TObjectPtr<UPlayerMovementComponent> GetMovement() { return movement; }
	FORCEINLINE void AddItem(TSubclassOf<AItem> _itemToAdd)
	{
		if (allItems.Num() > 1) return;
		allItems.Add(_itemToAdd);
	}
	FORCEINLINE void RemoveItem()
	{
		if (allItems.Num() < 0) return;
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
