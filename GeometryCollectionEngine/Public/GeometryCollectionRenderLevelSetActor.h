#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "GeometryCollectionRenderLevelSetActor.generated.h"

class UVolumeTexture;
class UMaterial;

UCLASS()
class GEOMETRYCOLLECTIONENGINE_API AGeometryCollectionRenderLevelSetActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UVolumeTexture* TargetVolumeTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterial* RayMarchMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SurfaceTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Isovalue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RenderVolumeBoundingBox;
    
    AGeometryCollectionRenderLevelSetActor();
};

