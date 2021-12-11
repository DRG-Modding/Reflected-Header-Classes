#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: FSDEngine ECarveFilterType
//CROSS-MODULE INCLUDE: Engine PrimitiveComponent
//CROSS-MODULE INCLUDE: FSDEngine CarveOptionsCellSize
#include "LevelGenerationCarverComponent.generated.h"

class USTLMeshCarver;
class UStaticMeshCarver;
class UStaticMesh;
class UTerrainMaterialBase;

UCLASS()
class ULevelGenerationCarverComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USTLMeshCarver* MeshCarver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStaticMesh* ConvexCarver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UStaticMeshCarver* StaticMeshCarver;
    
    UPROPERTY(EditAnywhere)
    UTerrainMaterialBase* TerrainMaterial;
    
    UPROPERTY(EditAnywhere)
    ECarveFilterType Filter;
    
    UPROPERTY(EditAnywhere)
    float ConvexExpensiveNoise;
    
    UPROPERTY(EditAnywhere)
    CarveOptionsCellSize CarveCellSize;
    
    UPROPERTY(EditAnywhere)
    bool PreviewEnabled;
    
    UPROPERTY(EditAnywhere)
    bool CarvingDisabled;
    
protected:
    UPROPERTY(EditAnywhere)
    bool SelfActivate;
    
public:
    ULevelGenerationCarverComponent();
};

