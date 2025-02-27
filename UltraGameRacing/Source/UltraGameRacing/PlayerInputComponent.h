// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InputMappingContext.h"
#include "PlayerInputComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ULTRAGAMERACING_API UPlayerInputComponent : public UActorComponent
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputMappingContext> imc = nullptr;
	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> moveAction = nullptr;
	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> lookBackAction = nullptr;
	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> useAction = nullptr;

public:
	FORCEINLINE TObjectPtr<UInputAction> GetMoveAction() const { return moveAction; }
	FORCEINLINE TObjectPtr<UInputAction> GetLookBackAction() const { return lookBackAction; }
	FORCEINLINE TObjectPtr<UInputAction> GetUseAction() const { return useAction; }

public:	
	// Sets default values for this component's properties
	UPlayerInputComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
