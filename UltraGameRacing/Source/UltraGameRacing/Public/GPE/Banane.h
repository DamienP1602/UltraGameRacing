// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GPE/Item.h"
#include "Banane.generated.h"

UCLASS()
class ULTRAGAMERACING_API ABanane : public AItem
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere) float stunTime = 2.f;

	UPROPERTY(EditAnywhere) float subSpeed = 300.f;
	UPROPERTY() float initialSpeed = 0.f;

	UPROPERTY() TObjectPtr<APlayerCharacter> pawn = nullptr;
public:	
	ABanane();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

public:
	virtual void Utilise(TObjectPtr<APlayerCharacter> _pawn) override;
	virtual void Execute(TObjectPtr<APlayerCharacter> _pawn) override;

};
