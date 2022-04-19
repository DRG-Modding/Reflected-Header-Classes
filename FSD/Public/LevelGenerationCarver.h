#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=FSDEngine -ObjectName=MatrixWithExactSync -FallbackName=MatrixWithExactSync
//CROSS-MODULE INCLUDE V2: -ModuleName=FSDEngine -ObjectName=CarveOptionsCellSize -FallbackName=CarveOptionsCellSize
//CROSS-MODULE INCLUDE V2: -ModuleName=FSDEngine -ObjectName=ECarveFilterType -FallbackName=ECarveFilterType
#include "LevelGenerationCarver.generated.h"

class USTLMeshCarver;
class UStaticMesh;
class UStaticMeshCarver;
class UTerrainMaterial;

USTRUCT()
struct FLevelGenerationCarver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMatrixWithExactSync Transform;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    USTLMeshCarver* MeshCarver;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UStaticMesh* ConvexCarver;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UStaticMeshCarver* StaticMeshCarver;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float ConvexExpensiveNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    CarveOptionsCellSize CarveCellSize;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* TerrainMaterial;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ECarveFilterType Filter;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool ToBeDiscarded;
    
    FSD_API FLevelGenerationCarver();
};

