#include "PlayerWidgets.h"

void UPlayerWidgets::NativeConstruct()
{
	Super::NativeConstruct();

	UpdateSprite();
}

void UPlayerWidgets::UpdateSprite()
{
	itemSprite->SetBrushFromTexture(allItemSprites[1]);
}
