#pragma once
#include "CoreMinimal.h"
#include "CSGBase.h"
#include "CSGSDFInstanceProperties.h"
//CROSS-MODULE INCLUDE: CoreUObject Matrix
#include "DeepCSGFloatTree.h"
#include "BinaryTerrainMaterialCombiner.h"
//CROSS-MODULE INCLUDE: CoreUObject Box
#include "CSGSDFInstance.generated.h"

class USDFBase;
class UBakeConfig;

UCLASS(BlueprintType)
class FSDENGINE_API UCSGSDFInstance : public UCSGBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FCSGSDFInstanceProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBinaryTerrainMaterialCombiner Materials;
    
    UPROPERTY(Transient)
    USDFBase* CSGSDFInstanceRoot;
    
    UPROPERTY(Transient)
    UBakeConfig* CurrentBakeConfig;
    
    UPROPERTY(Transient)
    FBox ChildLocalSpaceBoundingBox;
    
    UPROPERTY(Transient)
    FBox WorldSpaceBoundingBox;
    
    UPROPERTY(Transient)
    FDeepCSGFloatTree BoundingTree;
    
    UPROPERTY(Transient)
    FMatrix TransformMatInv;
    
    UCSGSDFInstance();
};

