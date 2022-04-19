#pragma once
#include "CoreMinimal.h"
#include "ContentWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
#include "Widget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EHorizontalAlignment -FallbackName=EHorizontalAlignment
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ECheckBoxState -FallbackName=ECheckBoxState
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=CheckBoxStyle -FallbackName=CheckBoxStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EButtonClickMethod -FallbackName=EButtonClickMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EButtonTouchMethod -FallbackName=EButtonTouchMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EButtonPressMethod -FallbackName=EButtonPressMethod
#include "OnCheckBoxComponentStateChangedDelegate.h"
#include "CheckBox.generated.h"

class USlateWidgetStyleAsset;
class USlateBrushAsset;

UCLASS()
class UMG_API UCheckBox : public UContentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECheckBoxState CheckedState;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UWidget::FGetCheckBoxState CheckedStateDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheckBoxStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    USlateWidgetStyleAsset* Style;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    USlateBrushAsset* UncheckedImage;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    USlateBrushAsset* UncheckedHoveredImage;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    USlateBrushAsset* UncheckedPressedImage;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    USlateBrushAsset* CheckedImage;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    USlateBrushAsset* CheckedHoveredImage;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    USlateBrushAsset* CheckedPressedImage;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    USlateBrushAsset* UndeterminedImage;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    USlateBrushAsset* UndeterminedHoveredImage;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    USlateBrushAsset* UndeterminedPressedImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMargin Padding;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSlateColor BorderBackgroundColor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EButtonClickMethod::Type> ClickMethod;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EButtonTouchMethod::Type> TouchMethod;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EButtonPressMethod::Type> PressMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFocusable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnCheckBoxComponentStateChanged OnCheckStateChanged;
    
    UCheckBox();
    UFUNCTION(BlueprintCallable)
    void SetTouchMethod(TEnumAsByte<EButtonTouchMethod::Type> InTouchMethod);
    
    UFUNCTION(BlueprintCallable)
    void SetPressMethod(TEnumAsByte<EButtonPressMethod::Type> InPressMethod);
    
    UFUNCTION(BlueprintCallable)
    void SetIsChecked(bool InIsChecked);
    
    UFUNCTION(BlueprintCallable)
    void SetClickMethod(TEnumAsByte<EButtonClickMethod::Type> InClickMethod);
    
    UFUNCTION(BlueprintCallable)
    void SetCheckedState(ECheckBoxState InCheckedState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPressed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChecked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECheckBoxState GetCheckedState() const;
    
};

