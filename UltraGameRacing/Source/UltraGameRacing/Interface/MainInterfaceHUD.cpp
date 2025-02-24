#include "MainInterfaceHUD.h"

AMainInterfaceHUD::AMainInterfaceHUD()
{

}

void AMainInterfaceHUD::InitUi()
{
	if (!mainInterface) return;

	currentMainInterface = CreateWidget<UPlayerWidgets>(GetWorld(), mainInterface);

	if (currentMainInterface)
		currentMainInterface->AddToViewport();

}

void AMainInterfaceHUD::BeginPlay()
{
	Super::BeginPlay();
	InitUi();
}
