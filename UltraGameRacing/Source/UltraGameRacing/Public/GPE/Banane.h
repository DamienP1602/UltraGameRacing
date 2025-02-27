// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GPE/Item.h"
#include "Banane.generated.h"

UCLASS()
class ULTRAGAMERACING_API ABanane : public AItem
{
	GENERATED_BODY()
	
public:	
	ABanane();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

public:
	virtual void Utilise(TObjectPtr<APawn> _pawn) override;
	virtual void Execute(TObjectPtr<APawn> _pawn) override;

};
