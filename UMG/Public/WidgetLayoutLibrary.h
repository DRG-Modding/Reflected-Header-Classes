#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
//CROSS-MODULE INCLUDE: SlateCore Geometry
#include "WidgetLayoutLibrary.generated.h"

class UWrapBoxSlot;
class UScrollBoxSlot;
class UUniformGridSlot;
class UWidget;
class UWidgetSwitcherSlot;
class USizeBoxSlot;
class UVerticalBoxSlot;
class UScaleBoxSlot;
class USafeZoneSlot;
class UOverlaySlot;
class UHorizontalBoxSlot;
class UGridSlot;
class UCanvasPanelSlot;
class UBorderSlot;
class UObject;
class APlayerController;

UCLASS(BlueprintType)
class UMG_API UWidgetLayoutLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static UWrapBoxSlot* SlotAsWrapBoxSlot(UWidget* Widget);
    
    UFUNCTION(BlueprintPure)
    static UWidgetSwitcherSlot* SlotAsWidgetSwitcherSlot(UWidget* Widget);
    
    UFUNCTION(BlueprintPure)
    static UVerticalBoxSlot* SlotAsVerticalBoxSlot(UWidget* Widget);
    
    UFUNCTION(BlueprintPure)
    static UUniformGridSlot* SlotAsUniformGridSlot(UWidget* Widget);
    
    UFUNCTION(BlueprintPure)
    static USizeBoxSlot* SlotAsSizeBoxSlot(UWidget* Widget);
    
    UFUNCTION(BlueprintPure)
    static UScrollBoxSlot* SlotAsScrollBoxSlot(UWidget* Widget);
    
    UFUNCTION(BlueprintPure)
    static UScaleBoxSlot* SlotAsScaleBoxSlot(UWidget* Widget);
    
    UFUNCTION(BlueprintPure)
    static USafeZoneSlot* SlotAsSafeBoxSlot(UWidget* Widget);
    
    UFUNCTION(BlueprintPure)
    static UOverlaySlot* SlotAsOverlaySlot(UWidget* Widget);
    
    UFUNCTION(BlueprintPure)
    static UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(UWidget* Widget);
    
    UFUNCTION(BlueprintPure)
    static UGridSlot* SlotAsGridSlot(UWidget* Widget);
    
    UFUNCTION(BlueprintPure)
    static UCanvasPanelSlot* SlotAsCanvasSlot(UWidget* Widget);
    
    UFUNCTION(BlueprintPure)
    static UBorderSlot* SlotAsBorderSlot(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void RemoveAllWidgets(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    static bool ProjectWorldLocationToWidgetPosition(APlayerController* PlayerController, FVector WorldLocation, FVector2D& ScreenPosition, bool bPlayerViewportRelative);
    
    UFUNCTION(BlueprintCallable)
    static FGeometry GetViewportWidgetGeometry(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    static FVector2D GetViewportSize(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    static float GetViewportScale(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FGeometry GetPlayerScreenWidgetGeometry(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    static bool GetMousePositionScaledByDPI(APlayerController* Player, float& LocationX, float& LocationY);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetMousePositionOnViewport(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetMousePositionOnPlatform();
    
    UWidgetLayoutLibrary();
};

