#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SlateCore Margin
#include "ContentWidget.h"
//CROSS-MODULE INCLUDE: SlateCore ECheckBoxState
//CROSS-MODULE INCLUDE: SlateCore CheckBoxStyle
//CROSS-MODULE INCLUDE: SlateCore EHorizontalAlignment
//CROSS-MODULE INCLUDE: SlateCore SlateColor
#include "CheckBox.generated.h"

class USlateBrushAsset;
class USlateWidgetStyleAsset;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal(ECheckBoxState, FCheckBoxCheckedStateDelegate);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCheckBoxOnCheckStateChanged, bool, bIsChecked);

UCLASS()
class UMG_API UCheckBox : public UContentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ECheckBoxState CheckedState;
    
    UPROPERTY()
    FCheckBoxCheckedStateDelegate CheckedStateDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCheckBoxStyle WidgetStyle;
    
    UPROPERTY()
    USlateWidgetStyleAsset* Style;
    
    UPROPERTY()
    USlateBrushAsset* UncheckedImage;
    
    UPROPERTY()
    USlateBrushAsset* UncheckedHoveredImage;
    
    UPROPERTY()
    USlateBrushAsset* UncheckedPressedImage;
    
    UPROPERTY()
    USlateBrushAsset* CheckedImage;
    
    UPROPERTY()
    USlateBrushAsset* CheckedHoveredImage;
    
    UPROPERTY()
    USlateBrushAsset* CheckedPressedImage;
    
    UPROPERTY()
    USlateBrushAsset* UndeterminedImage;
    
    UPROPERTY()
    USlateBrushAsset* UndeterminedHoveredImage;
    
    UPROPERTY()
    USlateBrushAsset* UndeterminedPressedImage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY()
    FMargin Padding;
    
    UPROPERTY()
    FSlateColor BorderBackgroundColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsFocusable;
    
    UPROPERTY(BlueprintAssignable)
    FCheckBoxOnCheckStateChanged OnCheckStateChanged;
    
    UFUNCTION(BlueprintCallable)
    void SetIsChecked(bool InIsChecked);
    
    UFUNCTION(BlueprintCallable)
    void SetCheckedState(ECheckBoxState InCheckedState);
    
    UFUNCTION(BlueprintPure)
    bool IsPressed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsChecked() const;
    
    UFUNCTION(BlueprintPure)
    ECheckBoxState GetCheckedState() const;
    
    UCheckBox();
};

