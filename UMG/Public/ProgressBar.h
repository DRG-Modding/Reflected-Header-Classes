#pragma once
#include "CoreMinimal.h"
#include "Widget.h"
#include "Widget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ProgressBarStyle -FallbackName=ProgressBarStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "Widget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=EProgressBarFillType -FallbackName=EProgressBarFillType
#include "ProgressBar.generated.h"

class USlateWidgetStyleAsset;
class USlateBrushAsset;

UCLASS()
class UMG_API UProgressBar : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProgressBarStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    USlateWidgetStyleAsset* Style;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    USlateBrushAsset* BackgroundImage;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    USlateBrushAsset* FillImage;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    USlateBrushAsset* MarqueeImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Percent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EProgressBarFillType::Type> BarFillType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMarquee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BorderPadding;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UWidget::FGetFloat PercentDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FillColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UWidget::FGetLinearColor FillColorAndOpacityDelegate;
    
    UProgressBar();
    UFUNCTION(BlueprintCallable)
    void SetPercent(float InPercent);
    
    UFUNCTION(BlueprintCallable)
    void SetIsMarquee(bool InbIsMarquee);
    
    UFUNCTION(BlueprintCallable)
    void SetFillColorAndOpacity(FLinearColor InColor);
    
};

