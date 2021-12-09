#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine StaticMeshComponent
//CROSS-MODULE INCLUDE: FSDEngine CarveOptionsCellSize
//CROSS-MODULE INCLUDE: FSDEngine ECarveFilterType
#include "MeshCarverComponent.generated.h"

class UTerrainMaterialBase;

UCLASS(EditInlineNew)
class UMeshCarverComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTerrainMaterialBase* TerrainMaterial;
    
    UPROPERTY(EditAnywhere)
    ECarveFilterType Filter;
    
    UPROPERTY(EditAnywhere)
    float ExpensiveNoise;
    
    UPROPERTY(EditAnywhere)
    CarveOptionsCellSize CarverSize;
    
    UFUNCTION(BlueprintCallable)
    void Carve();
    
    UMeshCarverComponent();
};

