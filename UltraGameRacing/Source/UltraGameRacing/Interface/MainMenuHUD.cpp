#include "MainMenuHUD.h"
#include "MainMenuWidgets.h"

void AMainMenuHUD::InitUi()
{
	if (!mainInterfaceRef) return;


	currentMainInterface = CreateWidget<UMainMenuWidgets>(GetWorld(), mainInterfaceRef);

	if (currentMainInterface)
		currentMainInterface->AddToViewport();

	GetOwningPlayerController()->SetShowMouseCursor(true);
}

void AMainMenuHUD::BeginPlay()
{
	Super::BeginPlay();
	InitUi();
}
