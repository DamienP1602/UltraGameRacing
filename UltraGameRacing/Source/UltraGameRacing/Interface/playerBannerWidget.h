#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include <Components/TextBlock.h>
#include "playerBannerWidget.generated.h"



UCLASS()
class ULTRAGAMERACING_API UplayerBannerWidget : public UUserWidget
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, meta = (BindWidget)) TObjectPtr<UTextBlock> playerName = nullptr;
	UPROPERTY(EditAnywhere, meta = (BindWidget)) TObjectPtr<UTextBlock> playerID = nullptr;

public:
	virtual void NativeConstruct() override;
	void Init();
};
