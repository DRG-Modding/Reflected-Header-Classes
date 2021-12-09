#pragma once
#include "CoreMinimal.h"
#include "Widget.h"
//CROSS-MODULE INCLUDE: SlateCore ProgressBarStyle
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
//CROSS-MODULE INCLUDE: Slate EProgressBarFillType
#include "ProgressBar.generated.h"

class USlateBrushAsset;
class USlateWidgetStyleAsset;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal(float, FProgressBarPercentDelegate);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal(FLinearColor, FProgressBarFillColorAndOpacityDelegate);

UCLASS()
class UMG_API UProgressBar : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FProgressBarStyle WidgetStyle;
    
    UPROPERTY()
    USlateWidgetStyleAsset* Style;
    
    UPROPERTY()
    USlateBrushAsset* BackgroundImage;
    
    UPROPERTY()
    USlateBrushAsset* FillImage;
    
    UPROPERTY()
    USlateBrushAsset* MarqueeImage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Percent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EProgressBarFillType::Type> BarFillType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsMarquee;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D BorderPadding;
    
    UPROPERTY()
    FProgressBarPercentDelegate PercentDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor FillColorAndOpacity;
    
    UPROPERTY()
    FProgressBarFillColorAndOpacityDelegate FillColorAndOpacityDelegate;
    
    UFUNCTION(BlueprintCallable)
    void SetPercent(float InPercent);
    
    UFUNCTION(BlueprintCallable)
    void SetIsMarquee(bool InbIsMarquee);
    
    UFUNCTION(BlueprintCallable)
    void SetFillColorAndOpacity(FLinearColor InColor);
    
    UProgressBar();
};

