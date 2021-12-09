#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "RandRange.h"
//CROSS-MODULE INCLUDE: FSDEngine ECarveFilterType
#include "RandomizedInstantMeshCarver.generated.h"

class UStaticMeshCarver;
class UStaticMesh;
class USTLMeshCarver;
class UTerrainMaterialBase;

UCLASS()
class ARandomizedInstantMeshCarver : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    TArray<UStaticMesh*> CarvingMeshes;
    
    UPROPERTY(EditAnywhere)
    TArray<USTLMeshCarver*> STLCarvingMeshes;
    
    UPROPERTY(EditAnywhere)
    TArray<UStaticMeshCarver*> StaticMeshCarvers;
    
    UPROPERTY(EditAnywhere)
    FRandRange RandomScale;
    
    UPROPERTY(EditAnywhere)
    UTerrainMaterialBase* TerrainMaterial;
    
    UPROPERTY(EditAnywhere)
    ECarveFilterType Filter;
    
public:
    ARandomizedInstantMeshCarver();
};

