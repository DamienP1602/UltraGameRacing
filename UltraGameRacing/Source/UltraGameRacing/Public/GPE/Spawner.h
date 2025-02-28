// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Spawner.generated.h"

UCLASS()
class ULTRAGAMERACING_API ASpawner : public AActor
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere) float delayForRespawn = 3.f;
	UPROPERTY(EditAnywhere) float currentTime = 0.f;

	UPROPERTY(EditAnywhere) TSubclassOf<AActor> actorToSpawn = nullptr;
	UPROPERTY(VisibleAnywhere) TObjectPtr<AActor> currentActorSpawned = nullptr;
	UPROPERTY(EditAnywhere) FVector offsetSpawn = FVector::ZeroVector;



public:	
	ASpawner();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	void Spawn();
	
private:
	void IncrementeTime(float Deltatime);
	UFUNCTION() void OnSpawnedActorDestroyed(AActor* DestroyedActor);
};
