#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine MaterialInstanceConstant
#include "LandscapeMaterialTextureStreamingInfo.h"
#include "LandscapeMaterialInstanceConstant.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo;
    
    UPROPERTY()
    uint8 bIsLayerThumbnail: 1;
    
    UPROPERTY()
    uint8 bDisableTessellation: 1;
    
    UPROPERTY()
    uint8 bMobile: 1;
    
    UPROPERTY()
    uint8 bEditorToolUsage: 1;
    
    ULandscapeMaterialInstanceConstant();
};

