// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "BaseHUD.generated.h"

class UMainMenuWidgets;

UCLASS()
class ULTRAGAMERACING_API ABaseHUD : public AHUD
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere) TSubclassOf<UMainMenuWidgets> widgetRef;
	UPROPERTY() TObjectPtr<UMainMenuWidgets> widget;

public:
	virtual void BeginPlay() override;
	void Init();

};
