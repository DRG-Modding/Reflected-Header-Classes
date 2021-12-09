#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AnimGraphRuntime AnimNode_SkeletalControlBase
//CROSS-MODULE INCLUDE: Engine BoneReference
#include "AnimNode_Tentacle.generated.h"

USTRUCT(BlueprintType)
struct FSD_API FAnimNode_Tentacle : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FBoneReference> BonesToModify;
    
    FAnimNode_Tentacle();
};

