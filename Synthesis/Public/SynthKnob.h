#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: UMG Widget
#include "SynthKnobStyle.h"
#include "SynthKnob.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal(float, FSynthKnobValueDelegate);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSynthKnobOnMouseCaptureEnd);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSynthKnobOnMouseCaptureBegin);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSynthKnobOnControllerCaptureEnd);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSynthKnobOnControllerCaptureBegin);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSynthKnobOnValueChanged, float, Value);

UCLASS()
class SYNTHESIS_API USynthKnob : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Value;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StepSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MouseSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MouseFineTuneSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 ShowTooltipInfo: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText ParameterName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText ParameterUnits;
    
    UPROPERTY()
    FSynthKnobValueDelegate ValueDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSynthKnobStyle WidgetStyle;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool Locked;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsFocusable;
    
    UPROPERTY(BlueprintAssignable)
    FSynthKnobOnMouseCaptureBegin OnMouseCaptureBegin;
    
    UPROPERTY(BlueprintAssignable)
    FSynthKnobOnMouseCaptureEnd OnMouseCaptureEnd;
    
    UPROPERTY(BlueprintAssignable)
    FSynthKnobOnControllerCaptureBegin OnControllerCaptureBegin;
    
    UPROPERTY(BlueprintAssignable)
    FSynthKnobOnControllerCaptureEnd OnControllerCaptureEnd;
    
    UPROPERTY(BlueprintAssignable)
    FSynthKnobOnValueChanged OnValueChanged;
    
    UFUNCTION(BlueprintCallable)
    void SetValue(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetStepSize(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLocked(bool InValue);
    
    UFUNCTION(BlueprintPure)
    float GetValue() const;
    
    USynthKnob();
};

