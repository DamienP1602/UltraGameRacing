// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputMappingContext.h"
#include <GameFramework/SpringArmComponent.h>
#include <Camera/CameraComponent.h>
#include <Subsystem/Race_GameInstanceSubsystem.h>
#include "PlayerRocket.generated.h"

class UPlayerInputComponent;
class AItem;
UCLASS()
class ULTRAGAMERACING_API APlayerRocket : public ACharacter
{
	GENERATED_BODY()

#pragma region Variable_Component
	UPROPERTY(EditAnywhere, Category = "Player|Component")
	TObjectPtr<UPlayerInputComponent> inputs = nullptr;
	UPROPERTY(EditAnywhere, Category = "Player|Component")
	TObjectPtr<UCameraComponent> camera = nullptr;
	UPROPERTY(EditAnywhere, Category = "Player|Component")
	TObjectPtr<USpringArmComponent> springArm = nullptr;
	UPROPERTY(VisibleAnywhere, Category = "Player|Inventory")
	TArray<TSubclassOf<AItem>> allItems;

	UPROPERTY()TObjectPtr<URace_GameInstanceSubsystem> raceSubsystem = nullptr;
#pragma endregion

#pragma region Variable_Movement
	UPROPERTY(EditAnywhere, Category = "Player|Movement")
	float rotationSpeed = 50.0f;
	UPROPERTY(EditAnywhere, Category = "Player|Movement")
	float maxMoveSpeed = 1000.0f;
	UPROPERTY(EditAnywhere, Category = "Player|Movement")
	float minMoveSpeed = 500.0f;
	UPROPERTY(EditAnywhere, Category = "Player|Movement")
	float currentMoveSpeed = 0.0f;
	UPROPERTY()
	FVector2D direction;
	UPROPERTY()
	bool isForward = false;
#pragma endregion

#pragma region Overlap_Box
	UPROPERTY()
	FVector boxHalfSize = FVector(100.0f, 100.0f, 50.0f);
	UPROPERTY(EditAnywhere, Category = "Player|Overlap")
	TArray<TEnumAsByte<EObjectTypeQuery>> layersToDetect;
	UPROPERTY()
	FHitResult hitResult;
	UPROPERTY()
	float forceMult = 5000.0f;
#pragma endregion

public:
	FORCEINLINE bool HasItem() { return allItems.Num() > 0; }
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
	APlayerRocket();

private:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	UFUNCTION() void UseItem(const FInputActionValue& _value);
	UFUNCTION(Server, Reliable, WithValidation) void ServerUseItem();
	UFUNCTION(NetMulticast, Reliable)
	void MulticastSpawnItem(FVector SpawnLocation, FRotator SpawnRotation, TSubclassOf<AItem> ItemClass);

	virtual void NotifyActorBeginOverlap(AActor* _otherActor) override;
	void Movement();
	UFUNCTION() void Move(const FInputActionValue& _value);
	UFUNCTION() void TurnCamera(const FInputActionValue& _value);

	void Detect();
	void Bounce(FHitResult _hitResult);
};
