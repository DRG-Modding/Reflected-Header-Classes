#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ELandscapeBlendMode.h"
#include "LandscapeLayerBrush.h"
#include "LandscapeLayer.generated.h"

class ULandscapeLayerInfoObject;

USTRUCT()
struct FLandscapeLayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bVisible;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bLocked;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float HeightmapAlpha;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float WeightmapAlpha;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ELandscapeBlendMode> BlendMode;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FLandscapeLayerBrush> Brushes;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<ULandscapeLayerInfoObject*, bool> WeightmapLayerAllocationBlend;
    
    LANDSCAPE_API FLandscapeLayer();
};

