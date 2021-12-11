#pragma once
#include "CoreMinimal.h"
#include "PanelWidget.h"
#include "WidgetSwitcher.generated.h"

class UWidget;

UCLASS()
class UMG_API UWidgetSwitcher : public UPanelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ActiveWidgetIndex;
    
    UFUNCTION(BlueprintCallable)
    void SetActiveWidgetIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveWidget(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetWidgetAtIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumWidgets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveWidgetIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetActiveWidget() const;
    
    UWidgetSwitcher();
};

