// Fill out your copyright notice in the Description page of Project Settings.


#include "GPE/LootBox.h"

ALootBox::ALootBox() : ACollectable()
{

}

void ALootBox::BeginPlay()
{
	Super::BeginPlay();
}

void ALootBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ALootBox::Execute(TObjectPtr<APlayerCharacter> _pawn)
{
	//if (_pawn.allItems.Count > 2)
	//	return;
	int _count = allItems.Num() - 1;
	int _randNum = FMath::RandRange(0, _count);
	_pawn->AddItem(allItems[_randNum]);
	Destroy();
}
