#pragma once
#include "CoreMinimal.h"
#include "ContentWidget.h"
//CROSS-MODULE INCLUDE: SlateCore EButtonPressMethod
//CROSS-MODULE INCLUDE: SlateCore EButtonTouchMethod
//CROSS-MODULE INCLUDE: SlateCore ButtonStyle
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
//CROSS-MODULE INCLUDE: SlateCore EButtonClickMethod
#include "Button.generated.h"

class USlateWidgetStyleAsset;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FButtonOnHovered);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FButtonOnClicked);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FButtonOnPressed);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FButtonOnReleased);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FButtonOnUnhovered);

UCLASS()
class UMG_API UButton : public UContentWidget {
    GENERATED_BODY()
public:
    UPROPERTY()
    USlateWidgetStyleAsset* Style;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FButtonStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor ColorAndOpacity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor BackgroundColor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EButtonClickMethod::Type> ClickMethod;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EButtonTouchMethod::Type> TouchMethod;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EButtonPressMethod::Type> PressMethod;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsFocusable;
    
    UPROPERTY(BlueprintAssignable)
    FButtonOnClicked OnClicked;
    
    UPROPERTY(BlueprintAssignable)
    FButtonOnPressed OnPressed;
    
    UPROPERTY(BlueprintAssignable)
    FButtonOnReleased OnReleased;
    
    UPROPERTY(BlueprintAssignable)
    FButtonOnHovered OnHovered;
    
    UPROPERTY(BlueprintAssignable)
    FButtonOnUnhovered OnUnhovered;
    
    UFUNCTION(BlueprintCallable)
    void SetTouchMethod(TEnumAsByte<EButtonTouchMethod::Type> InTouchMethod);
    
    UFUNCTION(BlueprintCallable)
    void SetStyle(const FButtonStyle& InStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetPressMethod(TEnumAsByte<EButtonPressMethod::Type> InPressMethod);
    
    UFUNCTION(BlueprintCallable)
    void SetColorAndOpacity(FLinearColor InColorAndOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetClickMethod(TEnumAsByte<EButtonClickMethod::Type> InClickMethod);
    
    UFUNCTION(BlueprintCallable)
    void SetBackgroundColor(FLinearColor InBackgroundColor);
    
    UFUNCTION(BlueprintPure)
    bool IsPressed() const;
    
    UButton();
};

