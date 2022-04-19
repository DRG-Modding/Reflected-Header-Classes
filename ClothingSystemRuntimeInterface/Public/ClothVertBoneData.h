#pragma once
#include "CoreMinimal.h"
#include "ClothVertBoneData.generated.h"

USTRUCT(BlueprintType)
struct FClothVertBoneData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 NumInfluences;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint16 BoneIndices[12];
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float BoneWeights[12];
    
    CLOTHINGSYSTEMRUNTIMEINTERFACE_API FClothVertBoneData();
};

