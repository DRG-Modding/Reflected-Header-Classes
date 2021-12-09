#pragma once
#include "CoreMinimal.h"
#include "CSGGroup.h"
//CROSS-MODULE INCLUDE: CoreUObject Box
#include "MeshLayerProperties.h"
#include "DeepCSGTree.h"
#include "GeneralTerrainMaterialCombiner.h"
//CROSS-MODULE INCLUDE: CoreUObject Matrix
#include "DeepCSGFloatTree.h"
#include "CSGLayer.generated.h"

UCLASS(BlueprintType)
class UCSGLayer : public UCSGGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMeshLayerProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGeneralTerrainMaterialCombiner Materials;
    
    UPROPERTY(Transient)
    FBox WorldSpaceBoundingBox;
    
    UPROPERTY(Transient)
    FDeepCSGFloatTree BoundingTree;
    
    UPROPERTY(Transient)
    FDeepCSGTree TempTree;
    
    UPROPERTY(Transient)
    FMatrix TransformMatInv;
    
    UCSGLayer();
};

