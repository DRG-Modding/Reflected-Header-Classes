#pragma once
#include "CoreMinimal.h"
#include "CSGBase.h"
#include "CSGBakedChildInstanceProperties.h"
//CROSS-MODULE INCLUDE: CoreUObject Box
#include "DeepCSGFloatTree.h"
//CROSS-MODULE INCLUDE: CoreUObject Matrix
#include "CSGBakedChildInstance.generated.h"

UCLASS(BlueprintType)
class UCSGBakedChildInstance : public UCSGBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCSGBakedChildInstanceProperties Properties;
    
    UPROPERTY(Transient)
    FBox ChildLocalSpaceBoundingBox;
    
    UPROPERTY(Transient)
    FBox WorldSpaceBoundingBox;
    
    UPROPERTY(Transient)
    FMatrix TransformMatInv;
    
    UPROPERTY(Transient)
    FDeepCSGFloatTree TempTree;
    
    UCSGBakedChildInstance();
};

