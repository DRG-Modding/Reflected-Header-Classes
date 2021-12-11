#pragma once
#include "CoreMinimal.h"
#include "Widget.h"
#include "ShapedTextOptions.h"
//CROSS-MODULE INCLUDE: Slate ETextJustify
//CROSS-MODULE INCLUDE: Slate ETextWrappingPolicy
//CROSS-MODULE INCLUDE: SlateCore Margin
#include "TextLayoutWidget.generated.h"

UCLASS(Abstract)
class UMG_API UTextLayoutWidget : public UWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FShapedTextOptions ShapedTextOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETextJustify::Type> Justification;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    ETextWrappingPolicy WrappingPolicy;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 AutoWrapText: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WrapTextAt;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FMargin Margin;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float LineHeightPercentage;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetJustification(TEnumAsByte<ETextJustify::Type> InJustification);
    
    UTextLayoutWidget();
};

