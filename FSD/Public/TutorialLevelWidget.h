#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FSDUserWidget.h"
#include "TutorialLevelWidget.generated.h"

class UTutorialContentWidget;

UCLASS(EditInlineNew)
class UTutorialLevelWidget : public UFSDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float DelayBetweenTutorials;
    
public:
    UFUNCTION()
    void ShowTutorialWidget(TSubclassOf<UTutorialContentWidget> TutorialWidget, bool ignoreQueue);
    
    UFUNCTION()
    void RemoveTutorialWidget(UTutorialContentWidget* TutorialWidget);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllTutorials();
    
protected:
    UFUNCTION()
    void OnTutorialFinished(UTutorialContentWidget* TutorialWidget);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnNewActiveTutorial(UTutorialContentWidget* Widget);
    
    UTutorialLevelWidget();
};

