#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "EKeyBindingAxis.h"
//CROSS-MODULE INCLUDE: SlateCore PointerEvent
//CROSS-MODULE INCLUDE: SlateCore KeyEvent
//CROSS-MODULE INCLUDE: Engine InputActionKeyMapping
#include "EFSDInputSource.h"
//CROSS-MODULE INCLUDE: Engine InputAxisKeyMapping
#include "InputDisplay.h"
//CROSS-MODULE INCLUDE: InputCore Key
#include "InputFunctionLibrary.generated.h"

class APlayerController;

UCLASS(BlueprintType)
class UInputFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void SetMouseSmoothingOn(bool smoothingOn);
    
    UFUNCTION(BlueprintPure)
    static bool IsMouseSmoothingOn();
    
    UFUNCTION(BlueprintPure)
    static bool IsMouseEventAction(const FPointerEvent& MouseEvent, const FName& ActionName, bool IgnoreCustomBindings);
    
    UFUNCTION(BlueprintPure)
    static bool IsKeyEventActionAny(const FKeyEvent& KeyEvent, TArray<FName> ActionNames, bool IgnoreCustomBindings);
    
    UFUNCTION(BlueprintPure)
    static bool IsKeyEventAction(const FKeyEvent& KeyEvent, FName ActionName, bool IgnoreCustomBindings);
    
    UFUNCTION(BlueprintPure)
    static bool IsAxisMappedToDirectional(FName InActionName, FKey Key, int32 Direction, bool IgnoreCustomBindings);
    
    UFUNCTION(BlueprintPure)
    static bool IsActionMappedTo(FName InActionName, FKey Key, bool IgnoreCustomBindings);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FKey> GetInputKeysBoundToAction(const FName& ActionName, EKeyBindingAxis Axis, bool IsGamePadKey);
    
    UFUNCTION(BlueprintPure)
    static bool GetAxisMapping(FName InActionName, int32 Axis, bool InGamepadKeys, FInputAxisKeyMapping& OutResult);
    
    UFUNCTION(BlueprintPure)
    static bool GetActionMapping(FName InActionName, bool InGamepadKeys, FInputActionKeyMapping& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static bool FindInputDisplay(const APlayerController* PlayerController, FName InputName, EFSDInputSource InputSource, int32 LayoutIndex, FInputDisplay& OutInputDisplay);
    
    UInputFunctionLibrary();
};

