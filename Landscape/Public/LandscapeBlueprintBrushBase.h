#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include "LandscapeBlueprintBrushBase.generated.h"

class UTextureRenderTarget2D;
class UObject;

UCLASS(Abstract, Blueprintable)
class LANDSCAPE_API ALandscapeBlueprintBrushBase : public AActor {
    GENERATED_BODY()
public:
    ALandscapeBlueprintBrushBase();
    UFUNCTION(BlueprintCallable)
    void RequestLandscapeUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UTextureRenderTarget2D* Render(bool InIsHeightmap, UTextureRenderTarget2D* InCombinedResult, const FName& InWeightmapLayerName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Initialize(const FTransform& InLandscapeTransform, const FIntPoint& InLandscapeSize, const FIntPoint& InLandscapeRenderTargetSize);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetBlueprintRenderDependencies(TArray<UObject*>& OutStreamableAssets);
    
};

