#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SlateCore ETextCommit
//CROSS-MODULE INCLUDE: SlateCore SlateColor
#include "Widget.h"
//CROSS-MODULE INCLUDE: SlateCore EditableTextStyle
#include "ShapedTextOptions.h"
//CROSS-MODULE INCLUDE: Slate VirtualKeyboardOptions
//CROSS-MODULE INCLUDE: SlateCore SlateFontInfo
//CROSS-MODULE INCLUDE: Slate EVirtualKeyboardTrigger
#include "EVirtualKeyboardType.h"
//CROSS-MODULE INCLUDE: Slate EVirtualKeyboardDismissAction
//CROSS-MODULE INCLUDE: Slate ETextJustify
#include "EditableText.generated.h"

class USlateBrushAsset;
class USlateWidgetStyleAsset;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal(FText, FEditableTextTextDelegate);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal(FText, FEditableTextHintTextDelegate);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEditableTextOnTextChanged, const FText&, Text);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEditableTextOnTextCommitted, const FText&, Text, TEnumAsByte<ETextCommit::Type>, CommitMethod);

UCLASS()
class UMG_API UEditableText : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText Text;
    
    UPROPERTY()
    FEditableTextTextDelegate TextDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText HintText;
    
    UPROPERTY()
    FEditableTextHintTextDelegate HintTextDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FEditableTextStyle WidgetStyle;
    
    UPROPERTY()
    USlateWidgetStyleAsset* Style;
    
    UPROPERTY()
    USlateBrushAsset* BackgroundImageSelected;
    
    UPROPERTY()
    USlateBrushAsset* BackgroundImageComposing;
    
    UPROPERTY()
    USlateBrushAsset* CaretImage;
    
    UPROPERTY()
    FSlateFontInfo Font;
    
    UPROPERTY()
    FSlateColor ColorAndOpacity;
    
    UPROPERTY(EditAnywhere)
    bool IsReadOnly;
    
    UPROPERTY(EditAnywhere)
    bool IsPassword;
    
    UPROPERTY(EditAnywhere)
    float MinimumDesiredWidth;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool IsCaretMovedWhenGainFocus;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool SelectAllTextWhenFocused;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool RevertTextOnEscape;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool ClearKeyboardFocusOnCommit;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
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
    FEditableTextOnTextChanged OnTextChanged;
    
    UPROPERTY(BlueprintAssignable)
    FEditableTextOnTextCommitted OnTextCommitted;
    
    UFUNCTION(BlueprintCallable)
    void SetText(FText InText);
    
    UFUNCTION(BlueprintCallable)
    void SetJustification(TEnumAsByte<ETextJustify::Type> InJustification);
    
    UFUNCTION(BlueprintCallable)
    void SetIsReadOnly(bool InbIsReadyOnly);
    
    UFUNCTION(BlueprintCallable)
    void SetIsPassword(bool InbIsPassword);
    
    UFUNCTION(BlueprintCallable)
    void SetHintText(FText InHintText);
    
    UFUNCTION(BlueprintPure)
    FText GetText() const;
    
    UEditableText();
};

