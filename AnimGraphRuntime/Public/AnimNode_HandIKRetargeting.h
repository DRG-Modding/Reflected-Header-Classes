#pragma once
#include "CoreMinimal.h"
#include "AnimNode_SkeletalControlBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "AnimNode_HandIKRetargeting.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference RightHandFK;
    
    UPROPERTY(EditAnywhere)
    FBoneReference LeftHandFK;
    
    UPROPERTY(EditAnywhere)
    FBoneReference RightHandIK;
    
    UPROPERTY(EditAnywhere)
    FBoneReference LeftHandIK;
    
    UPROPERTY(EditAnywhere)
    TArray<FBoneReference> IKBonesToMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HandFKWeight;
    
    FAnimNode_HandIKRetargeting();
};

