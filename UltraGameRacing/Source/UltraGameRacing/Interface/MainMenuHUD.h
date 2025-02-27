// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MainMenuHUD.generated.h"

class UMainMenuWidgets;

UCLASS()
class ULTRAGAMERACING_API AMainMenuHUD : public AHUD
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere) TSubclassOf<UMainMenuWidgets> mainInterfaceRef = nullptr;
	UPROPERTY() TObjectPtr<UMainMenuWidgets> currentMainInterface = nullptr;

private:
	virtual void BeginPlay() override;

	void InitUi();
};
