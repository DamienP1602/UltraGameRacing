#include "PlayerWidgets.h"

bool UPlayerWidgets::Initialize()
{
	Super::Initialize();

	UpdateSprite();
	return true;
}

void UPlayerWidgets::UpdateSprite()
{
	itemSprite->SetBrushFromTexture(allItemSprites[1]);
}
