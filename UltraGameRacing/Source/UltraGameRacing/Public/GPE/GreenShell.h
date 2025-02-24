// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GPE/Item.h"
#include "GreenShell.generated.h"

/**
 * 
 */
UCLASS()
class ULTRAGAMERACING_API AGreenShell : public AItem
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere) float moveSpeed = 50.f;
	UPROPERTY(EditAnywhere) float rotationSpeed = 50.f;
	UPROPERTY(EditAnywhere) TArray<TEnumAsByte<EObjectTypeQuery>> layersToDetect;
	FVector moveDirection = FVector::ForwardVector;

public:
	AGreenShell();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	void Move(float DeltaTime);
	void Rotate(float DeltaTime);
	void UpdateDirection(float DeltaTime);

	virtual void Utilise(TObjectPtr<APawn> _pawn) override;
	virtual void Execute(TObjectPtr<APawn> _pawn) override;
};
