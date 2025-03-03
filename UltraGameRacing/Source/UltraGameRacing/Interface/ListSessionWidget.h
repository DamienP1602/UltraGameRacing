#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include <Components/Button.h>
#include <Components/VerticalBox.h>
#include "ListSessionWidget.generated.h"

class UMainMenuWidgets;

UCLASS()
class ULTRAGAMERACING_API UListSessionWidget : public UUserWidget
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, meta = (BindWidget)) TObjectPtr<UButton> joinSessionButton = nullptr;
	UPROPERTY(EditAnywhere, meta = (BindWidget)) TObjectPtr<UButton> resetButton = nullptr;
	UPROPERTY(EditAnywhere, meta = (BindWidget)) TObjectPtr<UButton> returnMenuButton = nullptr;
	UPROPERTY(EditAnywhere, meta = (BindWidget)) TObjectPtr<UVerticalBox> listSessions = nullptr;

	UPROPERTY(EditAnywhere) TSubclassOf<UMainMenuWidgets> mainMenuRef = nullptr;

	UPROPERTY() TObjectPtr<>

public:
	virtual void NativeConstruct() override;
	void Init();

	UFUNCTION() void ReturnMenuButtonExecute();
	UFUNCTION() void ResetButtonExecute();
};
