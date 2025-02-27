#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include <Components/TextBlock.h>
#include <Components/Image.h>
#include "PlayerWidgets.generated.h"

UCLASS()
class ULTRAGAMERACING_API UPlayerWidgets : public UUserWidget
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, Category = "Texts", meta = (BindWidget)) TObjectPtr<UTextBlock> kilometers = nullptr;
	UPROPERTY(EditAnywhere, Category = "Texts", meta = (BindWidget)) TObjectPtr<UTextBlock> positionOnRace = nullptr;
	UPROPERTY(EditAnywhere, Category = "Texts", meta = (BindWidget)) TObjectPtr<UTextBlock> turnNumber = nullptr;

	UPROPERTY(EditAnywhere, Category = "Image", meta = (BindWidget)) TObjectPtr<UImage> itemSprite = nullptr;
	UPROPERTY(EditAnywhere, Category = "Image|Sprites") TArray<TObjectPtr<UTexture2D>> allItemSprites;
	
public:
	virtual void NativeConstruct() override;


	void UpdateSprite();

};
