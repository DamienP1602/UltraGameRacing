// Fill out your copyright notice in the Description page of Project Settings.


#include "GPE/Collectable.h"

ACollectable::ACollectable()
{
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>("Root");
	mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	mesh->SetupAttachment(RootComponent);

}

void ACollectable::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACollectable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

