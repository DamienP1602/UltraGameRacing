#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "PlayerWidgets.h"
#include "MainInterfaceHUD.generated.h"

UCLASS()
class ULTRAGAMERACING_API AMainInterfaceHUD : public AHUD
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere) TSubclassOf<UPlayerWidgets> mainInterface = nullptr;
	UPROPERTY() TObjectPtr<UPlayerWidgets> currentMainInterface = nullptr;

public:
	AMainInterfaceHUD();

protected:
	void InitUi();
	virtual void BeginPlay() override;

};
