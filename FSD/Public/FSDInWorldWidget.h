#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: UMG UserWidget
#include "FSDInWorldWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UFSDInWorldWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool bHUDVisibile;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveHUDVisibilityChanged(bool InHudVisible);
    
    UFUNCTION()
    void CallbackHUDVisibilityChanged(bool InHudVisible);
    
public:
    UFSDInWorldWidget();
};

