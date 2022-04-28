#pragma once
#include "CoreMinimal.h"
#include "PanelWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
#include "UniformGridPanel.generated.h"

class UWidget;
class UUniformGridSlot;

UCLASS(Blueprintable)
class UMG_API UUniformGridPanel : public UPanelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin SlotPadding;
    
    UPROPERTY(EditAnywhere)
    float MinDesiredSlotWidth;
    
    UPROPERTY(EditAnywhere)
    float MinDesiredSlotHeight;
    
    UUniformGridPanel();
    UFUNCTION(BlueprintCallable)
    void SetSlotPadding(FMargin InSlotPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);
    
    UFUNCTION(BlueprintCallable)
    void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);
    
    UFUNCTION(BlueprintCallable)
    UUniformGridSlot* AddChildToUniformGrid(UWidget* Content, int32 InRow, int32 InColumn);
    
};

