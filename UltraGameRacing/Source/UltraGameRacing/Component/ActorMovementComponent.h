// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InputActionValue.h"
#include "ActorMovementComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ULTRAGAMERACING_API UActorMovementComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UActorMovementComponent();

protected:
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	virtual void Move(const FInputActionValue& _value = FInputActionValue()) {};
	virtual void Rotate() {};
};
