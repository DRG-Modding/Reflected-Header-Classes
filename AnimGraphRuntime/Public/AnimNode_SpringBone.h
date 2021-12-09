#pragma once
#include "CoreMinimal.h"
#include "AnimNode_SkeletalControlBase.h"
//CROSS-MODULE INCLUDE: Engine BoneReference
#include "AnimNode_SpringBone.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference SpringBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxDisplacement;
    
    UPROPERTY(EditAnywhere)
    float SpringStiffness;
    
    UPROPERTY(EditAnywhere)
    float SpringDamping;
    
    UPROPERTY(EditAnywhere)
    float ErrorResetThresh;
    
    UPROPERTY(EditAnywhere)
    uint8 bLimitDisplacement: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bTranslateX: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bTranslateY: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bTranslateZ: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bRotateX: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bRotateY: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bRotateZ: 1;
    
    FAnimNode_SpringBone();
};

