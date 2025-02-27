#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include <Components/TextBlock.h>
#include <Components/Button.h>
#include "SessionWidget.generated.h"

UCLASS()
class ULTRAGAMERACING_API USessionWidget : public UUserWidget
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, meta = (BindWidget)) TObjectPtr<UTextBlock> nameParty = nullptr;
	UPROPERTY(EditAnywhere, meta = (BindWidget)) TObjectPtr<UTextBlock> playerNumber = nullptr;
	UPROPERTY(EditAnywhere, meta = (BindWidget)) TObjectPtr<UButton> selectSession = nullptr;

public:
	FORCEINLINE TObjectPtr<UButton> GetButton() { return selectSession; }
private:

	virtual void NativeConstruct() override;
	void Init();
};
