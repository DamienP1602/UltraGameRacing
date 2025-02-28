#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include <Components/Button.h>
#include <Components/VerticalBox.h>
#include "WaitingGameWidget.generated.h"

class UplayerBannerWidget;

UCLASS()
class ULTRAGAMERACING_API UWaitingGameWidget : public UUserWidget
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, meta = (BindWidget)) TObjectPtr<UButton> startGameButton = nullptr;
	UPROPERTY(EditAnywhere, meta = (BindWidget)) TObjectPtr<UVerticalBox> playerList = nullptr;

	UPROPERTY(EditAnywhere) TSubclassOf<UplayerBannerWidget> playerBannerRef = nullptr;
	UPROPERTY(EditAnywhere) TArray<TObjectPtr<UplayerBannerWidget>> allPlayers;

public:
	virtual void NativeConstruct() override;
	void Init();
	
};
