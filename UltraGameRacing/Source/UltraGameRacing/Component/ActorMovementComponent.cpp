// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorMovementComponent.h"

UActorMovementComponent::UActorMovementComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}


void UActorMovementComponent::BeginPlay()
{
	Super::BeginPlay();
	
}


void UActorMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

