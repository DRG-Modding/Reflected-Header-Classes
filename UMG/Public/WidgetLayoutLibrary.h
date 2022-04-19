#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Geometry -FallbackName=Geometry
#include "WidgetLayoutLibrary.generated.h"

class UWrapBoxSlot;
class UVerticalBoxSlot;
class UWidgetSwitcherSlot;
class UBorderSlot;
class UScaleBoxSlot;
class UWidget;
class UUniformGridSlot;
class UCanvasPanelSlot;
class USizeBoxSlot;
class UScrollBoxSlot;
class USafeZoneSlot;
class UOverlaySlot;
class UHorizontalBoxSlot;
class UGridSlot;
class UObject;
class APlayerController;

UCLASS(BlueprintType)
class UMG_API UWidgetLayoutLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UWidgetLayoutLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWrapBoxSlot* SlotAsWrapBoxSlot(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWidgetSwitcherSlot* SlotAsWidgetSwitcherSlot(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UVerticalBoxSlot* SlotAsVerticalBoxSlot(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUniformGridSlot* SlotAsUniformGridSlot(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USizeBoxSlot* SlotAsSizeBoxSlot(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UScrollBoxSlot* SlotAsScrollBoxSlot(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UScaleBoxSlot* SlotAsScaleBoxSlot(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USafeZoneSlot* SlotAsSafeBoxSlot(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UOverlaySlot* SlotAsOverlaySlot(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGridSlot* SlotAsGridSlot(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UCanvasPanelSlot* SlotAsCanvasSlot(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBorderSlot* SlotAsBorderSlot(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void RemoveAllWidgets(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    static bool ProjectWorldLocationToWidgetPosition(APlayerController* PlayerController, FVector WorldLocation, FVector2D& ScreenPosition, bool bPlayerViewportRelative);
    
    UFUNCTION(BlueprintCallable)
    static FGeometry GetViewportWidgetGeometry(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    static FVector2D GetViewportSize(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    static float GetViewportScale(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FGeometry GetPlayerScreenWidgetGeometry(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    static bool GetMousePositionScaledByDPI(APlayerController* Player, float& LocationX, float& LocationY);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetMousePositionOnViewport(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetMousePositionOnPlatform();
    
};

