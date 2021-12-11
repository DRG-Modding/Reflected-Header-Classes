#pragma once
#include "CoreMinimal.h"
#include "Visual.h"
//CROSS-MODULE INCLUDE: CoreUObject EMouseCursor
#include "ESlateVisibility.h"
#include "WidgetTransform.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
//CROSS-MODULE INCLUDE: SlateCore EWidgetClipping
//CROSS-MODULE INCLUDE: SlateCore EFlowDirectionPreference
//CROSS-MODULE INCLUDE: SlateCore EUINavigation
//CROSS-MODULE INCLUDE: SlateCore EUINavigationRule
//CROSS-MODULE INCLUDE: SlateCore Geometry
#include "Widget.generated.h"

class UPanelSlot;
class USlateAccessibleWidgetData;
class UWidget;
class UWidgetNavigation;
class APlayerController;
class UPropertyBinding;
class UPanelWidget;
class ULocalPlayer;
class UGameInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal(bool, FWidgetBIsEnabledDelegate);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal(FText, FWidgetToolTipTextDelegate);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal(UWidget*, FWidgetToolTipWidgetDelegate);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal(ESlateVisibility, FWidgetVisibilityDelegate);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(UWidget*, FWidgetInCustomDelegate, EUINavigation, Navigation);

UCLASS(Abstract, BlueprintType)
class UMG_API UWidget : public UVisual {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, TextExportTransient)
    UPanelSlot* Slot;
    
    UPROPERTY()
    FWidgetBIsEnabledDelegate bIsEnabledDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText ToolTipText;
    
    UPROPERTY()
    FWidgetToolTipTextDelegate ToolTipTextDelegate;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Export, VisibleAnywhere)
    UWidget* ToolTipWidget;
    
    UPROPERTY()
    FWidgetToolTipWidgetDelegate ToolTipWidgetDelegate;
    
    UPROPERTY()
    FWidgetVisibilityDelegate VisibilityDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FWidgetTransform RenderTransform;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D RenderTransformPivot;
    
    UPROPERTY()
    uint8 bIsVariable: 1;
    
    UPROPERTY(Transient)
    uint8 bCreatedByConstructionScript: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bIsEnabled: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverride_Cursor: 1;
    
private:
    UPROPERTY(Instanced)
    USlateAccessibleWidgetData* AccessibleWidgetData;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bIsVolatile: 1;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EMouseCursor::Type> Cursor;
    
    UPROPERTY(EditAnywhere)
    EWidgetClipping Clipping;
    
    UPROPERTY(EditAnywhere)
    ESlateVisibility Visibility;
    
    UPROPERTY(EditAnywhere)
    float RenderOpacity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UWidgetNavigation* Navigation;
    
    UPROPERTY(EditAnywhere)
    EFlowDirectionPreference FlowDirectionPreference;
    
protected:
    UPROPERTY(Transient)
    TArray<UPropertyBinding*> NativeBindings;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVisibility(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetUserFocus(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void SetToolTipText(const FText& InToolTipText);
    
    UFUNCTION(BlueprintCallable)
    void SetToolTip(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderTranslation(FVector2D Translation);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderTransformPivot(FVector2D Pivot);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderTransformAngle(float Angle);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderTransform(FWidgetTransform InTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderShear(FVector2D Shear);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderScale(FVector2D Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderOpacity(float InOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationRuleExplicit(EUINavigation Direction, UWidget* InWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationRuleCustomBoundary(EUINavigation Direction, FWidgetInCustomDelegate InCustomDelegate);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationRuleCustom(EUINavigation Direction, FWidgetInCustomDelegate InCustomDelegate);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationRuleBase(EUINavigation Direction, EUINavigationRule Rule);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, FName WidgetToFocus);
    
    UFUNCTION(BlueprintCallable)
    void SetKeyboardFocus();
    
    UFUNCTION(BlueprintCallable)
    void SetIsEnabled(bool bInIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetFocus();
    
    UFUNCTION(BlueprintCallable)
    void SetCursor(TEnumAsByte<EMouseCursor::Type> InCursor);
    
    UFUNCTION(BlueprintCallable)
    void SetClipping(EWidgetClipping InClipping);
    
    UFUNCTION(BlueprintCallable)
    void SetAllNavigationRules(EUINavigationRule Rule, FName WidgetToFocus);
    
    UFUNCTION(BlueprintCallable)
    void ResetCursor();
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromParent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHovered() const;
    
    UFUNCTION(BlueprintCallable)
    void InvalidateLayoutAndVolatility();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUserFocusedDescendants(APlayerController* PlayerController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUserFocus(APlayerController* PlayerController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMouseCaptureByUser(int32 UserIndex, int32 PointerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMouseCapture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasKeyboardFocus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFocusedDescendants() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyUserFocus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESlateVisibility GetVisibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGeometry GetTickSpaceGeometry() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRenderTransformAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRenderOpacity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPanelWidget* GetParent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGeometry GetPaintSpaceGeometry() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    APlayerController* GetOwningPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    ULocalPlayer* GetOwningLocalPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    UGameInstance* GetGameInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetDesiredSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWidgetClipping GetClipping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGeometry GetCachedGeometry() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceVolatile(bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void ForceLayoutPrepass();
    
    UWidget();
};

