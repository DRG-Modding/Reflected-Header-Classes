#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: UMG UserWidget
#include "DealWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UDealWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDealText();
    
    UDealWidget();
};

