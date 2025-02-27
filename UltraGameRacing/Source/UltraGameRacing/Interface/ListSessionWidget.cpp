#include "ListSessionWidget.h"
#include "MainMenuWidgets.h"

void UListSessionWidget::NativeConstruct()
{
	Super::NativeConstruct();
	Init();
}

void UListSessionWidget::Init()
{
	returnMenuButton->OnClicked.AddDynamic(this,&UListSessionWidget::ReturnMenuButtonExecute);
}

void UListSessionWidget::ReturnMenuButtonExecute()
{
	UMainMenuWidgets* _widget = CreateWidget<UMainMenuWidgets>(GetWorld(), mainMenuRef);
	if (!_widget) return;

	RemoveFromParent();
	_widget->AddToViewport();
		
}
