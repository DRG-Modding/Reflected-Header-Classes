#pragma once
#include "CoreMinimal.h"
#include "Widget.h"
#include "PanelWidget.generated.h"

class UPanelSlot;

UCLASS(Abstract)
class UMG_API UPanelWidget : public UWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    TArray<UPanelSlot*> Slots;
    
public:
    UFUNCTION(BlueprintCallable)
    bool RemoveChildAt(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveChild(UWidget* Content);
    
    UFUNCTION(BlueprintPure)
    bool HasChild(UWidget* Content) const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyChildren() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetChildrenCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetChildIndex(const UWidget* Content) const;
    
    UFUNCTION(BlueprintPure)
    UWidget* GetChildAt(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UWidget*> GetAllChildren() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearChildren();
    
    UFUNCTION(BlueprintCallable)
    UPanelSlot* AddChild(UWidget* Content);
    
    UPanelWidget();
};

