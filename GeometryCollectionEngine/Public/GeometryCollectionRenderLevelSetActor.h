#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GeometryCollectionRenderLevelSetActor.generated.h"

class UVolumeTexture;
class UMaterial;

UCLASS(Blueprintable)
class GEOMETRYCOLLECTIONENGINE_API AGeometryCollectionRenderLevelSetActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVolumeTexture* TargetVolumeTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* RayMarchMaterial;
    
    UPROPERTY(EditAnywhere)
    float SurfaceTolerance;
    
    UPROPERTY(EditAnywhere)
    float Isovalue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RenderVolumeBoundingBox;
    
    AGeometryCollectionRenderLevelSetActor();
};

