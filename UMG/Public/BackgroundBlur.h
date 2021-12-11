#pragma once
#include "CoreMinimal.h"
#include "ContentWidget.h"
//CROSS-MODULE INCLUDE: SlateCore Margin
//CROSS-MODULE INCLUDE: SlateCore EVerticalAlignment
//CROSS-MODULE INCLUDE: SlateCore EHorizontalAlignment
//CROSS-MODULE INCLUDE: SlateCore SlateBrush
#include "BackgroundBlur.generated.h"

UCLASS()
class UMG_API UBackgroundBlur : public UContentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bApplyAlphaToBlur;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BlurStrength;
    
    UPROPERTY()
    bool bOverrideAutoRadiusCalculation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    int32 BlurRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush LowQualityFallbackBrush;
    
    UFUNCTION(BlueprintCallable)
    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetPadding(FMargin InPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetLowQualityFallbackBrush(const FSlateBrush& InBrush);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetBlurStrength(float InStrength);
    
    UFUNCTION(BlueprintCallable)
    void SetBlurRadius(int32 InBlurRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);
    
    UBackgroundBlur();
};

