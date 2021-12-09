#pragma once
#include "CoreMinimal.h"
#include "Widget.h"
//CROSS-MODULE INCLUDE: SlateCore SliderStyle
//CROSS-MODULE INCLUDE: SlateCore EOrientation
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "Slider.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal(float, FSliderValueDelegate);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSliderOnMouseCaptureEnd);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSliderOnMouseCaptureBegin);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSliderOnControllerCaptureEnd);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSliderOnControllerCaptureBegin);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSliderOnValueChanged, float, Value);

UCLASS()
class UMG_API USlider : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Value;
    
    UPROPERTY()
    FSliderValueDelegate ValueDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSliderStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EOrientation> Orientation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor SliderBarColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor SliderHandleColor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool IndentHandle;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool Locked;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool MouseUsesStep;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool RequiresControllerLock;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StepSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsFocusable;
    
    UPROPERTY(BlueprintAssignable)
    FSliderOnMouseCaptureBegin OnMouseCaptureBegin;
    
    UPROPERTY(BlueprintAssignable)
    FSliderOnMouseCaptureEnd OnMouseCaptureEnd;
    
    UPROPERTY(BlueprintAssignable)
    FSliderOnControllerCaptureBegin OnControllerCaptureBegin;
    
    UPROPERTY(BlueprintAssignable)
    FSliderOnControllerCaptureEnd OnControllerCaptureEnd;
    
    UPROPERTY(BlueprintAssignable)
    FSliderOnValueChanged OnValueChanged;
    
    UFUNCTION(BlueprintCallable)
    void SetValue(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetStepSize(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderHandleColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderBarColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMinValue(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxValue(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLocked(bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIndentHandle(bool InValue);
    
    UFUNCTION(BlueprintPure)
    float GetValue() const;
    
    UFUNCTION(BlueprintPure)
    float GetNormalizedValue() const;
    
    USlider();
};

