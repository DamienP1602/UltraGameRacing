// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GPE/Item.h"
#include "Mushroom.generated.h"

UCLASS()
class ULTRAGAMERACING_API AMushroom : public AItem
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere) float boostTime = 2.f;

	UPROPERTY(EditAnywhere) float addingSpeed = 300.f;
	UPROPERTY() float initialSpeed = 0.f;

	UPROPERTY() TObjectPtr<APlayerRocket> pawn = nullptr;
	
public:	
	AMushroom();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

public:
	virtual void Utilise(TObjectPtr<APlayerRocket> _pawn) override;
	virtual void Execute(TObjectPtr<APlayerRocket> _pawn) override;

protected:
	void Boost(TObjectPtr<APlayerRocket> _pawn);
};
