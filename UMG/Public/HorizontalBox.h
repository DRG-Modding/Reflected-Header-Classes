#pragma once
#include "CoreMinimal.h"
#include "PanelWidget.h"
#include "HorizontalBox.generated.h"

class UWidget;
class UHorizontalBoxSlot;

UCLASS()
class UMG_API UHorizontalBox : public UPanelWidget {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    UHorizontalBoxSlot* AddChildToHorizontalBox(UWidget* Content);
    
    UHorizontalBox();
};

