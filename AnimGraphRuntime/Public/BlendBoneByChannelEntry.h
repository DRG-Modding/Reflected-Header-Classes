#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BoneReference
#include "BlendBoneByChannelEntry.generated.h"

USTRUCT(BlueprintType)
struct FBlendBoneByChannelEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference SourceBone;
    
    UPROPERTY(EditAnywhere)
    FBoneReference TargetBone;
    
    UPROPERTY(EditAnywhere)
    bool bBlendTranslation;
    
    UPROPERTY(EditAnywhere)
    bool bBlendRotation;
    
    UPROPERTY(EditAnywhere)
    bool bBlendScale;
    
    ANIMGRAPHRUNTIME_API FBlendBoneByChannelEntry();
};

