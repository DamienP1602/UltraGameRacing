#include "WaitingSessionHUD.h"
#include "WaitingGameWidget.h"

void AWaitingSessionHUD::BeginPlay()
{
	Super::BeginPlay();
	Init();

	GetOwningPlayerController()->SetShowMouseCursor(true);
}

void AWaitingSessionHUD::Init()
{
	if (!widgetRef) return;

	widget = CreateWidget<UWaitingGameWidget>(GetWorld(),widgetRef);
	if (!widget) return;

	widget->AddToViewport();
}
