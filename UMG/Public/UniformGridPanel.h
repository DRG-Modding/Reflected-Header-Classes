#pragma once
#include "CoreMinimal.h"
#include "PanelWidget.h"
//CROSS-MODULE INCLUDE: SlateCore Margin
#include "UniformGridPanel.generated.h"

class UWidget;
class UUniformGridSlot;

UCLASS()
class UMG_API UUniformGridPanel : public UPanelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin SlotPadding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinDesiredSlotWidth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinDesiredSlotHeight;
    
    UFUNCTION(BlueprintCallable)
    void SetSlotPadding(FMargin InSlotPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);
    
    UFUNCTION(BlueprintCallable)
    void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);
    
    UFUNCTION(BlueprintCallable)
    UUniformGridSlot* AddChildToUniformGrid(UWidget* Content, int32 InRow, int32 InColumn);
    
    UUniformGridPanel();
};

