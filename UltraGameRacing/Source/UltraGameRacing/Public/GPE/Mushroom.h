// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GPE/Item.h"
#include "Mushroom.generated.h"

UCLASS()
class ULTRAGAMERACING_API AMushroom : public AItem
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere) float boostValue = 50.f;
	UPROPERTY(EditAnywhere) float boostTime = 2.f;
	
public:	
	AMushroom();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

public:
	virtual void Utilise(TObjectPtr<APawn> _pawn) override;
	virtual void Execute(TObjectPtr<APawn> _pawn) override;

protected:
	void Boost(TObjectPtr<APawn> _pawn);
};
