// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FinalLine.generated.h"

UCLASS()
class ULTRAGAMERACING_API AFinalLine : public AActor
{
	GENERATED_BODY()
	
public:	
	AFinalLine();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

};
