#pragma once
#include "CoreMinimal.h"
#include "PanelWidget.h"
#include "Overlay.generated.h"

class UWidget;
class UOverlaySlot;

UCLASS(Blueprintable)
class UMG_API UOverlay : public UPanelWidget {
    GENERATED_BODY()
public:
    UOverlay();
    UFUNCTION(BlueprintCallable)
    UOverlaySlot* AddChildToOverlay(UWidget* Content);
    
};

