#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "EHUDVisibilityMode.h"
#include "EHUDVisibilityPresets.h"
#include "EHUDVisibilityGroups.h"
#include "HUDVisibilityRegisteredWidget.h"
//CROSS-MODULE INCLUDE: UMG ESlateVisibility
#include "HUDVisibilityGroup.generated.h"

class UWidget;
class UHUDVisibilityGroup;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHUDVisibilityGroupOnModeChanged, UHUDVisibilityGroup*, Group, EHUDVisibilityMode, Mode);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHUDVisibilityGroupOnVisibilityChanged, UHUDVisibilityGroup*, Group, bool, IsVisible);

UCLASS(BlueprintType)
class FSD_API UHUDVisibilityGroup : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FHUDVisibilityGroupOnModeChanged OnModeChanged;
    
    UPROPERTY(BlueprintAssignable)
    FHUDVisibilityGroupOnVisibilityChanged OnVisibilityChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EHUDVisibilityGroups GroupID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Title;
    
    UPROPERTY(EditAnywhere)
    bool AllowDynamicMode;
    
    UPROPERTY(EditAnywhere)
    bool AllowHiddenMode;
    
    UPROPERTY(Transient)
    bool bDynamicallyVisible;
    
    UPROPERTY(Transient)
    TArray<FHUDVisibilityRegisteredWidget> RegisteredWidgets;
    
    UPROPERTY(EditAnywhere)
    EHUDVisibilityMode RecommendedMode;
    
    UPROPERTY(EditAnywhere)
    EHUDVisibilityMode MinimalMode;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetModeFromPreset(EHUDVisibilityPresets Preset);
    
    UFUNCTION(BlueprintCallable)
    void SetMode(EHUDVisibilityMode InMode);
    
protected:
    UFUNCTION(BlueprintCallable)
    static void SetHudGroupDynamicallyVisible(UHUDVisibilityGroup* Group, bool IsVisible);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetGroupDynamicallyVisible(bool IsVisible);
    
protected:
    UFUNCTION(BlueprintCallable)
    static void RegisterWidgetWithVisibilityGroup(UWidget* Widget, UHUDVisibilityGroup* Group, ESlateVisibility VisibleMode, ESlateVisibility HiddenMode);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterMultipleWidgetsWithVisibilityGroup(TArray<UWidget*> Widgets, UHUDVisibilityGroup* Group, ESlateVisibility VisibleMode, ESlateVisibility HiddenMode);
    
    UFUNCTION(BlueprintPure)
    bool IsModeAllowed(EHUDVisibilityMode InMode) const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsInDynamicMode() const;
    
protected:
    UFUNCTION(BlueprintPure)
    static bool IsHudGroupVisible(UHUDVisibilityGroup* Group);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsGroupVisible() const;
    
    UFUNCTION(BlueprintPure)
    EHUDVisibilityMode GetMode() const;
    
protected:
    UFUNCTION(BlueprintPure)
    TArray<EHUDVisibilityMode> GetAllowedModes() const;
    
public:
    UHUDVisibilityGroup();
};

