#pragma once
#include "CoreMinimal.h"
#include "AnimNode_SkeletalControlBase.h"
//CROSS-MODULE INCLUDE: Engine BoneReference
//CROSS-MODULE INCLUDE: Engine EBoneControlSpace
#include "AnimNode_CopyBone.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference SourceBone;
    
    UPROPERTY(EditAnywhere)
    FBoneReference TargetBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCopyTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCopyRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCopyScale;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBoneControlSpace> ControlSpace;
    
    FAnimNode_CopyBone();
};

