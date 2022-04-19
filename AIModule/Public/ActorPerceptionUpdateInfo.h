#pragma once
#include "CoreMinimal.h"
#include "AIStimulus.h"
#include "ActorPerceptionUpdateInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActorPerceptionUpdateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 TargetId;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Target;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FAIStimulus Stimulus;
    
    AIMODULE_API FActorPerceptionUpdateInfo();
};

