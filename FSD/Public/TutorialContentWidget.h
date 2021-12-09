#pragma once
#include "CoreMinimal.h"
#include "FSDUserWidget.h"
#include "TutorialContentWidget.generated.h"

class UTutorialContentWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTutorialContentWidgetOnTutorialFinished, UTutorialContentWidget*, TutorialWidget);

UCLASS(EditInlineNew)
class UTutorialContentWidget : public UFSDUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FTutorialContentWidgetOnTutorialFinished OnTutorialFinished;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShown();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRemoveWidget();
    
    UTutorialContentWidget();
};

