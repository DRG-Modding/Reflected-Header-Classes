#pragma once
#include "CoreMinimal.h"
#include "PanelWidget.h"
#include "VerticalBox.generated.h"

class UWidget;
class UVerticalBoxSlot;

UCLASS()
class UMG_API UVerticalBox : public UPanelWidget {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    UVerticalBoxSlot* AddChildToVerticalBox(UWidget* Content);
    
    UVerticalBox();
};

