#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "WaitingSessionHUD.generated.h"

class UWaitingGameWidget;

UCLASS()
class ULTRAGAMERACING_API AWaitingSessionHUD : public AHUD
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere) TSubclassOf<UWaitingGameWidget> widgetRef;


public:

};
