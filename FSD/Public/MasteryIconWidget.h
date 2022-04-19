#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "MasteryIconWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UMasteryIconWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UMasteryIconWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveUnlocked();
    
};

