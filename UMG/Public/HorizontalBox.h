#pragma once
#include "CoreMinimal.h"
#include "PanelWidget.h"
#include "HorizontalBox.generated.h"

class UHorizontalBoxSlot;
class UWidget;

UCLASS()
class UMG_API UHorizontalBox : public UPanelWidget {
    GENERATED_BODY()
public:
    UHorizontalBox();
    UFUNCTION(BlueprintCallable)
    UHorizontalBoxSlot* AddChildToHorizontalBox(UWidget* Content);
    
};

