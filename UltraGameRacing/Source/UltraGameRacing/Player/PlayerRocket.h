// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputMappingContext.h"
#include <GameFramework/SpringArmComponent.h>
#include <Camera/CameraComponent.h>
#include "PlayerRocket.generated.h"

class UPlayerInputComponent;
class AItem;
UCLASS()
class ULTRAGAMERACING_API APlayerRocket : public ACharacter
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere)
	TObjectPtr<UPlayerInputComponent> inputs = nullptr;
	UPROPERTY(EditAnywhere)
	TObjectPtr<UCameraComponent> camera = nullptr;
	UPROPERTY(EditAnywhere)
	TObjectPtr<USpringArmComponent> springArm = nullptr;
	UPROPERTY(VisibleAnywhere)
	TArray<TSubclassOf<AItem>> allItems;

	//movement
	UPROPERTY(EditAnywhere)
	float rotationSpeed = 50.0f;
	UPROPERTY(EditAnywhere)
	float maxMoveSpeed = 1000.0f;
	UPROPERTY(EditAnywhere)
	float minMoveSpeed = 500.0f;
	UPROPERTY(EditAnywhere)
	float currentMoveSpeed = 0.0f;
	UPROPERTY()
	FVector2D direction;
	UPROPERTY()
	bool isForward = false;

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

	virtual void NotifyActorBeginOverlap(AActor* _otherActor) override;
	void Movement();
	UFUNCTION() void Move(const FInputActionValue& _value);
	UFUNCTION() void TurnCamera(const FInputActionValue& _value);
};
