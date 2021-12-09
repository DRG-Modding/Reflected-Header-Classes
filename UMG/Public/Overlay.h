#pragma once
#include "CoreMinimal.h"
#include "PanelWidget.h"
#include "Overlay.generated.h"

class UOverlaySlot;
class UWidget;

UCLASS()
class UMG_API UOverlay : public UPanelWidget {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    UOverlaySlot* AddChildToOverlay(UWidget* Content);
    
    UOverlay();
};
