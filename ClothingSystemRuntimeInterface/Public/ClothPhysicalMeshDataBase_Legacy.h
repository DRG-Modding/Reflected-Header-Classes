#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ClothVertBoneData.h"
#include "ClothPhysicalMeshDataBase_Legacy.generated.h"

UCLASS()
class CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClothPhysicalMeshDataBase_Legacy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FVector> Vertices;
    
    UPROPERTY()
    TArray<FVector> Normals;
    
    UPROPERTY()
    TArray<uint32> Indices;
    
    UPROPERTY()
    TArray<float> InverseMasses;
    
    UPROPERTY()
    TArray<FClothVertBoneData> BoneData;
    
    UPROPERTY()
    int32 NumFixedVerts;
    
    UPROPERTY()
    int32 MaxBoneWeights;
    
    UPROPERTY()
    TArray<uint32> SelfCollisionIndices;
    
    UClothPhysicalMeshDataBase_Legacy();
};

