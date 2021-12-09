#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Box
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: FSDEngine DeepCSGFloatTree
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "STLMeshCarver.generated.h"

UCLASS()
class FSD_API USTLMeshCarver : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FBox AABB;
    
    UPROPERTY(VisibleAnywhere)
    FDeepCSGFloatTree BSPTree;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FVector> Vertices;
    
    USTLMeshCarver();
};

