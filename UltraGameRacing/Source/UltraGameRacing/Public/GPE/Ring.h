// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ring.generated.h"

UCLASS()
class ULTRAGAMERACING_API ARing : public AActor
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere) int index = -1;
	
public:
	FORCEINLINE int GetIndex() const { return index; }

public:	
	ARing();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

};
