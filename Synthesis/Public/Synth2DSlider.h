#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: UMG Widget
#include "Synth2DSliderStyle.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "Synth2DSlider.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal(float, FSynth2DSliderValueXDelegate);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal(float, FSynth2DSliderValueYDelegate);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSynth2DSliderOnMouseCaptureEnd);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSynth2DSliderOnMouseCaptureBegin);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSynth2DSliderOnControllerCaptureEnd);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSynth2DSliderOnControllerCaptureBegin);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSynth2DSliderOnValueChangedX, float, Value);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSynth2DSliderOnValueChangedY, float, Value);

UCLASS()
class SYNTHESIS_API USynth2DSlider : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ValueX;
    
    UPROPERTY(EditAnywhere)
    float ValueY;
    
    UPROPERTY()
    FSynth2DSliderValueXDelegate ValueXDelegate;
    
    UPROPERTY()
    FSynth2DSliderValueYDelegate ValueYDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSynth2DSliderStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor SliderHandleColor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool IndentHandle;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool Locked;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StepSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsFocusable;
    
    UPROPERTY(BlueprintAssignable)
    FSynth2DSliderOnMouseCaptureBegin OnMouseCaptureBegin;
    
    UPROPERTY(BlueprintAssignable)
    FSynth2DSliderOnMouseCaptureEnd OnMouseCaptureEnd;
    
    UPROPERTY(BlueprintAssignable)
    FSynth2DSliderOnControllerCaptureBegin OnControllerCaptureBegin;
    
    UPROPERTY(BlueprintAssignable)
    FSynth2DSliderOnControllerCaptureEnd OnControllerCaptureEnd;
    
    UPROPERTY(BlueprintAssignable)
    FSynth2DSliderOnValueChangedX OnValueChangedX;
    
    UPROPERTY(BlueprintAssignable)
    FSynth2DSliderOnValueChangedY OnValueChangedY;
    
    UFUNCTION(BlueprintCallable)
    void SetValue(FVector2D InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetStepSize(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderHandleColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLocked(bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIndentHandle(bool InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetValue() const;
    
    USynth2DSlider();
};

