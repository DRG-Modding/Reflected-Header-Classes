#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SlateCore EVerticalAlignment
//CROSS-MODULE INCLUDE: SlateCore EHorizontalAlignment
#include "PanelSlot.h"
//CROSS-MODULE INCLUDE: SlateCore Margin
#include "SlateChildSize.h"
#include "HorizontalBoxSlot.generated.h"

UCLASS(BlueprintType)
class UMG_API UHorizontalBoxSlot : public UPanelSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateChildSize Size;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
    UFUNCTION(BlueprintCallable)
    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetSize(FSlateChildSize InSize);
    
    UFUNCTION(BlueprintCallable)
    void SetPadding(FMargin InPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
    
    UHorizontalBoxSlot();
};

