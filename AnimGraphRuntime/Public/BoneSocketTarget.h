#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BoneReference
#include "SocketReference.h"
#include "BoneSocketTarget.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FBoneSocketTarget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bUseSocket;
    
    UPROPERTY(EditAnywhere)
    FBoneReference BoneReference;
    
    UPROPERTY(EditAnywhere)
    FSocketReference SocketReference;
    
    FBoneSocketTarget();
};

