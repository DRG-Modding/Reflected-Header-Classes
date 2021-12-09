#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
//CROSS-MODULE INCLUDE: SlateCore ScrollBoxStyle
#include "PanelWidget.h"
//CROSS-MODULE INCLUDE: SlateCore ScrollBarStyle
#include "ESlateVisibility.h"
//CROSS-MODULE INCLUDE: SlateCore EOrientation
//CROSS-MODULE INCLUDE: SlateCore EConsumeMouseWheel
//CROSS-MODULE INCLUDE: SlateCore Margin
//CROSS-MODULE INCLUDE: Slate EDescendantScrollDestination
//CROSS-MODULE INCLUDE: Slate EScrollWhenFocusChanges
#include "ScrollBox.generated.h"

class USlateWidgetStyleAsset;
class UWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FScrollBoxOnUserScrolled, float, CurrentOffset);

UCLASS()
class UMG_API UScrollBox : public UPanelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FScrollBoxStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FScrollBarStyle WidgetBarStyle;
    
    UPROPERTY()
    USlateWidgetStyleAsset* Style;
    
    UPROPERTY()
    USlateWidgetStyleAsset* BarStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EOrientation> Orientation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESlateVisibility ScrollBarVisibility;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EConsumeMouseWheel ConsumeMouseWheel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D ScrollbarThickness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin ScrollbarPadding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool AlwaysShowScrollbar;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool AlwaysShowScrollbarTrack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool AllowOverscroll;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAnimateWheelScrolling;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EDescendantScrollDestination NavigationDestination;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float NavigationScrollPadding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EScrollWhenFocusChanges ScrollWhenFocusChanges;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAllowRightClickDragScrolling;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WheelScrollMultiplier;
    
    UPROPERTY(BlueprintAssignable)
    FScrollBoxOnUserScrolled OnUserScrolled;
    
    UFUNCTION(BlueprintCallable)
    void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollOffset(float NewScrollOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollbarVisibility(ESlateVisibility NewScrollBarVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollbarThickness(const FVector2D& NewScrollbarThickness);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollbarPadding(const FMargin& NewScrollbarPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetOrientation(TEnumAsByte<EOrientation> NewOrientation);
    
    UFUNCTION(BlueprintCallable)
    void SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling);
    
    UFUNCTION(BlueprintCallable)
    void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowOverscroll(bool NewAllowOverscroll);
    
    UFUNCTION(BlueprintCallable)
    void ScrollWidgetIntoView(UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination, float Padding);
    
    UFUNCTION(BlueprintCallable)
    void ScrollToStart();
    
    UFUNCTION(BlueprintCallable)
    void ScrollToEnd();
    
    UFUNCTION(BlueprintPure)
    float GetViewOffsetFraction() const;
    
    UFUNCTION(BlueprintPure)
    float GetScrollOffsetOfEnd() const;
    
    UFUNCTION(BlueprintPure)
    float GetScrollOffset() const;
    
    UFUNCTION(BlueprintCallable)
    void EndInertialScrolling();
    
    UScrollBox();
};

