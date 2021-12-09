#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: FSDEngine ECarveFilterType
//CROSS-MODULE INCLUDE: Engine PrimitiveComponent
#include "STLMeshCarverComponent.generated.h"

class UTerrainMaterialBase;
class USTLMeshCarver;

UCLASS()
class USTLMeshCarverComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTerrainMaterialBase* TerrainMaterial;
    
    UPROPERTY(EditAnywhere)
    USTLMeshCarver* MeshCarver;
    
    UPROPERTY(EditAnywhere)
    ECarveFilterType Filter;
    
    UPROPERTY(EditAnywhere)
    bool PreviewEnabled;
    
    USTLMeshCarverComponent();
};

