// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../PlayerCharacter.h"
#include "Collectable.generated.h"

UCLASS()
class ULTRAGAMERACING_API ACollectable : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere) TObjectPtr<UStaticMeshComponent> mesh = nullptr;
	
public:
	FORCEINLINE TObjectPtr<UStaticMeshComponent> GetMesh() { return mesh; }

public:	
	ACollectable();


protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

public:
	virtual void Execute(TObjectPtr<APlayerCharacter> _pawn) PURE_VIRTUAL(ACollectable::Execute, )

};
