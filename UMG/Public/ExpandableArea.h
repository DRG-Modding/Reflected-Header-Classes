#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SlateCore SlateColor
//CROSS-MODULE INCLUDE: SlateCore SlateBrush
#include "Widget.h"
#include "NamedSlotInterface.h"
//CROSS-MODULE INCLUDE: SlateCore ExpandableAreaStyle
//CROSS-MODULE INCLUDE: SlateCore Margin
#include "ExpandableArea.generated.h"

class UExpandableArea;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FExpandableAreaOnExpansionChanged, UExpandableArea*, Area, bool, bIsExpanded);

UCLASS()
class UMG_API UExpandableArea : public UWidget, public INamedSlotInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FExpandableAreaStyle Style;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush BorderBrush;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor BorderColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsExpanded;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin HeaderPadding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin AreaPadding;
    
    UPROPERTY(BlueprintAssignable)
    FExpandableAreaOnExpansionChanged OnExpansionChanged;
    
protected:
    UPROPERTY(Export)
    UWidget* HeaderContent;
    
    UPROPERTY(Export)
    UWidget* BodyContent;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIsExpanded_Animated(bool IsExpanded);
    
    UFUNCTION(BlueprintCallable)
    void SetIsExpanded(bool IsExpanded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsExpanded() const;
    
    UExpandableArea();
    
    // Fix for true pure virtual functions not being implemented
};

