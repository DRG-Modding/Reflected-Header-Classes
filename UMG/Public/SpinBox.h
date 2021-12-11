#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SlateCore SlateColor
#include "Widget.h"
//CROSS-MODULE INCLUDE: SlateCore SpinBoxStyle
//CROSS-MODULE INCLUDE: SlateCore ETextCommit
//CROSS-MODULE INCLUDE: Slate ETextJustify
//CROSS-MODULE INCLUDE: SlateCore SlateFontInfo
#include "SpinBox.generated.h"

class USlateWidgetStyleAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal(float, FSpinBoxValueDelegate);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpinBoxOnEndSliderMovement, float, InValue);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSpinBoxOnBeginSliderMovement);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpinBoxOnValueChanged, float, InValue);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSpinBoxOnValueCommitted, float, InValue, TEnumAsByte<ETextCommit::Type>, CommitMethod);

UCLASS()
class UMG_API USpinBox : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Value;
    
    UPROPERTY()
    FSpinBoxValueDelegate ValueDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSpinBoxStyle WidgetStyle;
    
    UPROPERTY()
    USlateWidgetStyleAsset* Style;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MinFractionalDigits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxFractionalDigits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAlwaysUsesDeltaSnap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Delta;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SliderExponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateFontInfo Font;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETextJustify::Type> Justification;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float MinDesiredWidth;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool ClearKeyboardFocusOnCommit;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool SelectAllTextOnCommit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor ForegroundColor;
    
    UPROPERTY(BlueprintAssignable)
    FSpinBoxOnValueChanged OnValueChanged;
    
    UPROPERTY(BlueprintAssignable)
    FSpinBoxOnValueCommitted OnValueCommitted;
    
    UPROPERTY(BlueprintAssignable)
    FSpinBoxOnBeginSliderMovement OnBeginSliderMovement;
    
    UPROPERTY(BlueprintAssignable)
    FSpinBoxOnEndSliderMovement OnEndSliderMovement;
    
protected:
    UPROPERTY(EditAnywhere)
    uint8 bOverride_MinValue: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_MaxValue: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_MinSliderValue: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_MaxSliderValue: 1;
    
    UPROPERTY(EditAnywhere)
    float MinValue;
    
    UPROPERTY(EditAnywhere)
    float MaxValue;
    
    UPROPERTY(EditAnywhere)
    float MinSliderValue;
    
    UPROPERTY(EditAnywhere)
    float MaxSliderValue;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetValue(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMinValue(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMinSliderValue(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMinFractionalDigits(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxValue(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxSliderValue(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxFractionalDigits(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetForegroundColor(FSlateColor InForegroundColor);
    
    UFUNCTION(BlueprintCallable)
    void SetDelta(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAlwaysUsesDeltaSnap(bool bNewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinSliderValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMinFractionalDigits() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxSliderValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxFractionalDigits() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDelta() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAlwaysUsesDeltaSnap() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearMinValue();
    
    UFUNCTION(BlueprintCallable)
    void ClearMinSliderValue();
    
    UFUNCTION(BlueprintCallable)
    void ClearMaxValue();
    
    UFUNCTION(BlueprintCallable)
    void ClearMaxSliderValue();
    
    USpinBox();
};

