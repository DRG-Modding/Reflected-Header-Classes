#pragma once
#include "CoreMinimal.h"
#include "PanelWidget.h"
#include "CanvasPanel.generated.h"

class UWidget;
class UCanvasPanelSlot;

UCLASS()
class UMG_API UCanvasPanel : public UPanelWidget {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    UCanvasPanelSlot* AddChildToCanvas(UWidget* Content);
    
    UCanvasPanel();
};

