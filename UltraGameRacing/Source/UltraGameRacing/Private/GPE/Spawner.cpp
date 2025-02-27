// Fill out your copyright notice in the Description page of Project Settings.


#include "GPE/Spawner.h"


ASpawner::ASpawner()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ASpawner::BeginPlay()
{
	Super::BeginPlay();

}

void ASpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	IncrementeTime(DeltaTime);
}

void ASpawner::Spawn()
{
	if (!actorToSpawn || currentActorSpawned) return;

	FVector _currentPos = GetActorLocation();
	FRotator _currentRot = GetActorRotation();
	currentActorSpawned = GetWorld()->SpawnActor<AActor>(actorToSpawn, _currentPos + offsetSpawn, _currentRot);
	currentActorSpawned->OnDestroyed.AddDynamic(this, &ASpawner::OnSpawnedActorDestroyed);
}

void ASpawner::IncrementeTime(float Deltatime)
{
	if (currentActorSpawned)
		return;
	currentTime += Deltatime;
	if (currentTime >= delayForRespawn) {
		currentTime = 0.f;
		Spawn();
	}
}

void ASpawner::OnSpawnedActorDestroyed(AActor* _destroyedActor)
{

	currentActorSpawned = nullptr;

}

