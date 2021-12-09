#pragma once
#include "CoreMinimal.h"
#include "Widget.h"
//CROSS-MODULE INCLUDE: SlateCore ButtonStyle
//CROSS-MODULE INCLUDE: SlateCore TextBlockStyle
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
//CROSS-MODULE INCLUDE: Slate InputChord
//CROSS-MODULE INCLUDE: SlateCore Margin
//CROSS-MODULE INCLUDE: InputCore Key
//CROSS-MODULE INCLUDE: SlateCore SlateFontInfo
#include "ESlateVisibility.h"
#include "InputKeySelector.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInputKeySelectorOnKeySelected, FInputChord, SelectedKey);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FInputKeySelectorOnIsSelectingKeyChanged);

UCLASS()
class UMG_API UInputKeySelector : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FButtonStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTextBlockStyle TextStyle;
    
    UPROPERTY(BlueprintReadOnly)
    FInputChord SelectedKey;
    
    UPROPERTY()
    FSlateFontInfo Font;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin Margin;
    
    UPROPERTY()
    FLinearColor ColorAndOpacity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText KeySelectionText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText NoKeySpecifiedText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAllowModifierKeys;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAllowGamepadKeys;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FKey> EscapeKeys;
    
    UPROPERTY(BlueprintAssignable)
    FInputKeySelectorOnKeySelected OnKeySelected;
    
    UPROPERTY(BlueprintAssignable)
    FInputKeySelectorOnIsSelectingKeyChanged OnIsSelectingKeyChanged;
    
    UFUNCTION(BlueprintCallable)
    void SetTextBlockVisibility(const ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedKey(const FInputChord& InSelectedKey);
    
    UFUNCTION(BlueprintCallable)
    void SetNoKeySpecifiedText(FText InNoKeySpecifiedText);
    
    UFUNCTION(BlueprintCallable)
    void SetKeySelectionText(FText InKeySelectionText);
    
    UFUNCTION(BlueprintCallable)
    void SetEscapeKeys(const TArray<FKey>& InKeys);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowModifierKeys(bool bInAllowModifierKeys);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowGamepadKeys(bool bInAllowGamepadKeys);
    
    UFUNCTION(BlueprintPure)
    bool GetIsSelectingKey() const;
    
    UInputKeySelector();
};

