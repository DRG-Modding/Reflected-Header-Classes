#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SlateCore EVerticalAlignment
//CROSS-MODULE INCLUDE: SlateCore EHorizontalAlignment
#include "PanelSlot.h"
//CROSS-MODULE INCLUDE: SlateCore Margin
#include "WindowTitleBarAreaSlot.generated.h"

UCLASS(BlueprintType)
class UMG_API UWindowTitleBarAreaSlot : public UPanelSlot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetPadding(FMargin InPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
    
    UWindowTitleBarAreaSlot();
};

