// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GPE/Collectable.h"
#include "LootBox.generated.h"


class AItem;
/**
 * 
 */
UCLASS()
class ULTRAGAMERACING_API ALootBox : public ACollectable
{
	GENERATED_BODY()



	UPROPERTY(EditAnywhere) TArray<TSubclassOf<AItem>> allItems = TArray<TSubclassOf<AItem>>();


public:
	ALootBox();


protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

public:
	virtual void Execute(TObjectPtr<APlayerRocket> _pawn) override;
	
};
