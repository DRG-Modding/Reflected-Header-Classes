#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SlateCore SlateColor
#include "Widget.h"
//CROSS-MODULE INCLUDE: SlateCore ComboBoxStyle
//CROSS-MODULE INCLUDE: SlateCore TableRowStyle
//CROSS-MODULE INCLUDE: SlateCore ESelectInfo
//CROSS-MODULE INCLUDE: SlateCore SlateFontInfo
//CROSS-MODULE INCLUDE: SlateCore Margin
#include "ComboBoxString.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(UWidget*, FComboBoxStringOnGenerateWidgetEvent, const FString&, Item);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FComboBoxStringOnSelectionChanged, const FString&, SelectedItem, TEnumAsByte<ESelectInfo::Type>, SelectionType);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FComboBoxStringOnOpening);

UCLASS()
class UMG_API UComboBoxString : public UWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FString> DefaultOptions;
    
    UPROPERTY(EditAnywhere)
    FString SelectedOption;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FComboBoxStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTableRowStyle ItemStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin ContentPadding;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float MaxListHeight;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool HasDownArrow;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool EnableGamepadNavigationMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateFontInfo Font;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor ForegroundColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsFocusable;
    
    UPROPERTY(EditAnywhere)
    FComboBoxStringOnGenerateWidgetEvent OnGenerateWidgetEvent;
    
    UPROPERTY(BlueprintAssignable)
    FComboBoxStringOnSelectionChanged OnSelectionChanged;
    
    UPROPERTY(BlueprintAssignable)
    FComboBoxStringOnOpening OnOpening;
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedOption(const FString& Option);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedIndex(const int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveOption(const FString& Option);
    
    UFUNCTION(BlueprintCallable)
    void RefreshOptions();
    
    UFUNCTION(BlueprintPure)
    bool IsOpen() const;
    
    UFUNCTION(BlueprintPure)
    FString GetSelectedOption() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSelectedIndex() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetOptionCount() const;
    
    UFUNCTION(BlueprintPure)
    FString GetOptionAtIndex(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    int32 FindOptionIndex(const FString& Option) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearSelection();
    
    UFUNCTION(BlueprintCallable)
    void ClearOptions();
    
    UFUNCTION(BlueprintCallable)
    void AddOption(const FString& Option);
    
    UComboBoxString();
};

