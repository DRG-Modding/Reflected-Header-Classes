#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: UMG UserWidget
#include "MasteryIconWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UMasteryIconWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveUnlocked();
    
    UMasteryIconWidget();
};

