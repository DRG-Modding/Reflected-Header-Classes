#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_Base -FallbackName=AnimNode_Base
#include "EMotionRange.h"
#include "EHandSkeleton.h"
#include "EHand.h"
#include "SteamVRSkeletonTransform.h"
#include "UE4RetargettingRefs.h"
#include "AnimNode_SteamVRInputAnimPose.generated.h"

USTRUCT(BlueprintType)
struct STEAMVRINPUTDEVICE_API FAnimNode_SteamVRInputAnimPose : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMotionRange MotionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHand hand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHandSkeleton HandSkeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Mirror;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamVRSkeletonTransform SteamVRSkeletalTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUE4RetargettingRefs UE4RetargettingRefs;
    
    FAnimNode_SteamVRInputAnimPose();
};

