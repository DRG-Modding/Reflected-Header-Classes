#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: UMG UserWidget
#include "CrosshairWidget.generated.h"

class AItem;

UCLASS(EditInlineNew)
class UCrosshairWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    void SetData(AItem* Item);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpgraded(AItem* Item);
    
    UCrosshairWidget();
};

