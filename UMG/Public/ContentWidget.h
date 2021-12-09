#pragma once
#include "CoreMinimal.h"
#include "PanelWidget.h"
#include "ContentWidget.generated.h"

class UPanelSlot;
class UWidget;

UCLASS(Abstract)
class UMG_API UContentWidget : public UPanelWidget {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    UPanelSlot* SetContent(UWidget* Content);
    
    UFUNCTION(BlueprintPure)
    UPanelSlot* GetContentSlot() const;
    
    UFUNCTION(BlueprintPure)
    UWidget* GetContent() const;
    
    UContentWidget();
};

