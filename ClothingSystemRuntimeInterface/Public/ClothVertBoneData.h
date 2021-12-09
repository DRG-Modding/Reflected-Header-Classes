#pragma once
#include "CoreMinimal.h"
#include "ClothVertBoneData.generated.h"

USTRUCT(BlueprintType)
struct FClothVertBoneData {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 NumInfluences;
    
    UPROPERTY()
    uint16 BoneIndices[12];
    
    UPROPERTY()
    float BoneWeights[12];
    
    CLOTHINGSYSTEMRUNTIMEINTERFACE_API FClothVertBoneData();
};

