#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "DealWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UDealWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UDealWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDealText();
    
};

