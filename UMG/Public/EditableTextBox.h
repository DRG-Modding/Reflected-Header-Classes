#pragma once
#include "CoreMinimal.h"
#include "Widget.h"
//CROSS-MODULE INCLUDE: SlateCore Margin
//CROSS-MODULE INCLUDE: SlateCore SlateFontInfo
//CROSS-MODULE INCLUDE: SlateCore EditableTextBoxStyle
#include "ShapedTextOptions.h"
//CROSS-MODULE INCLUDE: Slate VirtualKeyboardOptions
//CROSS-MODULE INCLUDE: Slate EVirtualKeyboardTrigger
#include "EVirtualKeyboardType.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
//CROSS-MODULE INCLUDE: Slate EVirtualKeyboardDismissAction
//CROSS-MODULE INCLUDE: Slate ETextJustify
//CROSS-MODULE INCLUDE: SlateCore ETextCommit
#include "EditableTextBox.generated.h"

class USlateWidgetStyleAsset;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal(FText, FEditableTextBoxTextDelegate);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal(FText, FEditableTextBoxHintTextDelegate);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEditableTextBoxOnTextChanged, const FText&, Text);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEditableTextBoxOnTextCommitted, const FText&, Text, TEnumAsByte<ETextCommit::Type>, CommitMethod);

UCLASS()
class UMG_API UEditableTextBox : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText Text;
    
    UPROPERTY()
    FEditableTextBoxTextDelegate TextDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FEditableTextBoxStyle WidgetStyle;
    
    UPROPERTY()
    USlateWidgetStyleAsset* Style;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText HintText;
    
    UPROPERTY()
    FEditableTextBoxHintTextDelegate HintTextDelegate;
    
    UPROPERTY()
    FSlateFontInfo Font;
    
    UPROPERTY()
    FLinearColor ForegroundColor;
    
    UPROPERTY()
    FLinearColor BackgroundColor;
    
    UPROPERTY()
    FLinearColor ReadOnlyForegroundColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsReadOnly;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsPassword;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinimumDesiredWidth;
    
    UPROPERTY()
    FMargin Padding;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool IsCaretMovedWhenGainFocus;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool SelectAllTextWhenFocused;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool RevertTextOnEscape;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool ClearKeyboardFocusOnCommit;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool SelectAllTextOnCommit;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool AllowContextMenu;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TEnumAsByte<EVirtualKeyboardType::Type> KeyboardType;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FVirtualKeyboardOptions VirtualKeyboardOptions;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    EVirtualKeyboardTrigger VirtualKeyboardTrigger;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    EVirtualKeyboardDismissAction VirtualKeyboardDismissAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETextJustify::Type> Justification;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FShapedTextOptions ShapedTextOptions;
    
    UPROPERTY(BlueprintAssignable)
    FEditableTextBoxOnTextChanged OnTextChanged;
    
    UPROPERTY(BlueprintAssignable)
    FEditableTextBoxOnTextCommitted OnTextCommitted;
    
    UFUNCTION(BlueprintCallable)
    void SetText(FText InText);
    
    UFUNCTION(BlueprintCallable)
    void SetJustification(TEnumAsByte<ETextJustify::Type> InJustification);
    
    UFUNCTION(BlueprintCallable)
    void SetIsReadOnly(bool bReadOnly);
    
    UFUNCTION(BlueprintCallable)
    void SetIsPassword(bool bIsPassword);
    
    UFUNCTION(BlueprintCallable)
    void SetHintText(FText InText);
    
    UFUNCTION(BlueprintCallable)
    void SetError(FText InError);
    
    UFUNCTION(BlueprintPure)
    bool HasError() const;
    
    UFUNCTION(BlueprintPure)
    FText GetText() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearError();
    
    UEditableTextBox();
};

