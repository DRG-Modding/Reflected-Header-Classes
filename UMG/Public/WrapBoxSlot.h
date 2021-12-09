#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SlateCore EVerticalAlignment
//CROSS-MODULE INCLUDE: SlateCore EHorizontalAlignment
#include "PanelSlot.h"
//CROSS-MODULE INCLUDE: SlateCore Margin
#include "WrapBoxSlot.generated.h"

UCLASS(BlueprintType)
class UMG_API UWrapBoxSlot : public UPanelSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bFillEmptySpace;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FillSpanWhenLessThan;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
    UFUNCTION(BlueprintCallable)
    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetPadding(FMargin InPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
    
    UFUNCTION(BlueprintCallable)
    void SetFillEmptySpace(bool InbFillEmptySpace);
    
    UWrapBoxSlot();
};

