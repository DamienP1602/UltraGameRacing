#include "BaseHUD.h"
#include "MainMenuWidgets.h"

void ABaseHUD::BeginPlay()
{
	Super::BeginPlay();
	Init();
}

void ABaseHUD::Init()
{
	if (!widgetRef) return;

	widget = CreateWidget<UMainMenuWidgets>(GetWorld(), widgetRef);
	if (!widget) return;

	widget->AddToViewport();
}
