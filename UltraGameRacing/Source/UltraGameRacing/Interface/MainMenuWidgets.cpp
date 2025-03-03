#include "MainMenuWidgets.h"
#include <Kismet/KismetSystemLibrary.h>
#include "ListSessionWidget.h"

void UMainMenuWidgets::NativeConstruct()
{
	Super::NativeConstruct();
	Init();

}

void UMainMenuWidgets::Init()
{
	playButton->OnClicked.AddDynamic(this,&UMainMenuWidgets::PlayButtonExecute);
	joinLobbyButton->OnClicked.AddDynamic(this,&UMainMenuWidgets::JoinButtonExecute);
	quitButton->OnClicked.AddDynamic(this,&UMainMenuWidgets::QuitButtonExecute);
}

void UMainMenuWidgets::PlayButtonExecute()
{
	GetWorld()->ServerTravel("/Game/Level/LVL_01?listen");
}

void UMainMenuWidgets::JoinButtonExecute()
{
	UListSessionWidget* _widget = CreateWidget<UListSessionWidget>(GetWorld(), listSessionRef);
	if (!_widget)
	{
		UKismetSystemLibrary::PrintString(this,"Widget EMPTY");
		return;
	}

	RemoveFromParent();
	_widget->AddToViewport();
}

void UMainMenuWidgets::QuitButtonExecute()
{
	UKismetSystemLibrary::QuitGame(GetWorld(), GetOwningPlayer(), EQuitPreference::Quit, true);
}