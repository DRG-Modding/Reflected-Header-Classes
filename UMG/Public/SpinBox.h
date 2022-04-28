#pragma once
#include "CoreMinimal.h"
#include "Widget.h"
#include "Widget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ETextCommit -FallbackName=ETextCommit
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SpinBoxStyle -FallbackName=SpinBoxStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateFontInfo -FallbackName=SlateFontInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=ETextJustify -FallbackName=ETextJustify
#include "SpinBox.generated.h"

class USlateWidgetStyleAsset;

UCLASS(Blueprintable)
class UMG_API USpinBox : public UWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSpinBoxValueCommittedEvent, float, InValue, TEnumAsByte<ETextCommit::Type>, CommitMethod);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpinBoxValueChangedEvent, float, InValue);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSpinBoxBeginSliderMovement);
    
    UPROPERTY(EditAnywhere)
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetFloat ValueDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpinBoxStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateWidgetStyleAsset* Style;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinFractionalDigits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxFractionalDigits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysUsesDeltaSnap;
    
    UPROPERTY(EditAnywhere)
    float Delta;
    
    UPROPERTY(EditAnywhere)
    float SliderExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo Font;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETextJustify::Type> Justification;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float MinDesiredWidth;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ClearKeyboardFocusOnCommit;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SelectAllTextOnCommit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor ForegroundColor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpinBoxValueChangedEvent OnValueChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpinBoxValueCommittedEvent OnValueCommitted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpinBoxBeginSliderMovement OnBeginSliderMovement;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpinBoxValueChangedEvent OnEndSliderMovement;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_MinValue: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_MaxValue: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_MinSliderValue: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    USpinBox();
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
    
    UFUNCTION(BlueprintPure)
    float GetValue() const;
    
    UFUNCTION(BlueprintPure)
    float GetMinValue() const;
    
    UFUNCTION(BlueprintPure)
    float GetMinSliderValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMinFractionalDigits() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxValue() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxSliderValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxFractionalDigits() const;
    
    UFUNCTION(BlueprintPure)
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
    
};

