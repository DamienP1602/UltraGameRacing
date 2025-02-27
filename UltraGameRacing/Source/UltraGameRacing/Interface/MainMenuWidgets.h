#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include <Components/Button.h>
#include "MainMenuWidgets.generated.h"

class UListSessionWidget;

UCLASS()
class ULTRAGAMERACING_API UMainMenuWidgets : public UUserWidget
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, meta = (BindWidget)) TObjectPtr<UButton> playButton = nullptr;
	UPROPERTY(EditAnywhere, meta = (BindWidget)) TObjectPtr<UButton> joinLobbyButton = nullptr;
	UPROPERTY(EditAnywhere, meta = (BindWidget)) TObjectPtr<UButton> quitButton = nullptr;
	
	UPROPERTY(EditAnywhere) TSubclassOf<UListSessionWidget> listSessionRef = nullptr;


private:
	virtual void NativeConstruct() override;
	void Init();

	UFUNCTION() void PlayButtonExecute();
	UFUNCTION() void JoinButtonExecute();
	UFUNCTION() void QuitButtonExecute();
};
