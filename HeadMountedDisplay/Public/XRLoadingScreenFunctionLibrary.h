#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "XRLoadingScreenFunctionLibrary.generated.h"

class UTexture;

UCLASS(BlueprintType)
class HEADMOUNTEDDISPLAY_API UXRLoadingScreenFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void ShowLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    static void SetLoadingScreen(UTexture* Texture, FVector2D Scale, FVector Offset, bool bShowLoadingMovie, bool bShowOnSet);
    
    UFUNCTION(BlueprintCallable)
    static void HideLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    static void ClearLoadingScreenSplashes();
    
    UFUNCTION(BlueprintCallable)
    static void AddLoadingScreenSplash(UTexture* Texture, FVector Translation, FRotator Rotation, FVector2D Size, FRotator DeltaRotation, bool bClearBeforeAdd);
    
    UXRLoadingScreenFunctionLibrary();
};

