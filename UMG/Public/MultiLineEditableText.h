#pragma once
#include "CoreMinimal.h"
#include "TextLayoutWidget.h"
//CROSS-MODULE INCLUDE: SlateCore TextBlockStyle
//CROSS-MODULE INCLUDE: SlateCore SlateFontInfo
//CROSS-MODULE INCLUDE: Slate VirtualKeyboardOptions
//CROSS-MODULE INCLUDE: Slate EVirtualKeyboardDismissAction
//CROSS-MODULE INCLUDE: SlateCore ETextCommit
#include "MultiLineEditableText.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal(FText, FMultiLineEditableTextHintTextDelegate);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMultiLineEditableTextOnTextChanged, const FText&, Text);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMultiLineEditableTextOnTextCommitted, const FText&, Text, TEnumAsByte<ETextCommit::Type>, CommitMethod);

UCLASS()
class UMG_API UMultiLineEditableText : public UTextLayoutWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText Text;
    
    UPROPERTY(EditAnywhere)
    FText HintText;
    
    UPROPERTY()
    FMultiLineEditableTextHintTextDelegate HintTextDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTextBlockStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsReadOnly;
    
    UPROPERTY()
    FSlateFontInfo Font;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool SelectAllTextWhenFocused;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool ClearTextSelectionOnFocusLoss;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool RevertTextOnEscape;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool ClearKeyboardFocusOnCommit;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool AllowContextMenu;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FVirtualKeyboardOptions VirtualKeyboardOptions;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    EVirtualKeyboardDismissAction VirtualKeyboardDismissAction;
    
    UPROPERTY(BlueprintAssignable)
    FMultiLineEditableTextOnTextChanged OnTextChanged;
    
    UPROPERTY(BlueprintAssignable)
    FMultiLineEditableTextOnTextCommitted OnTextCommitted;
    
    UFUNCTION(BlueprintCallable)
    void SetWidgetStyle(const FTextBlockStyle& InWidgetStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetText(FText InText);
    
    UFUNCTION(BlueprintCallable)
    void SetIsReadOnly(bool bReadOnly);
    
    UFUNCTION(BlueprintCallable)
    void SetHintText(FText InHintText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetHintText() const;
    
    UMultiLineEditableText();
};

