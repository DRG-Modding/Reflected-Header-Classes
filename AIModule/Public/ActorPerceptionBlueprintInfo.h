#pragma once
#include "CoreMinimal.h"
#include "AIStimulus.h"
#include "ActorPerceptionBlueprintInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActorPerceptionBlueprintInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FAIStimulus> LastSensedStimuli;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bIsHostile: 1;
    
    AIMODULE_API FActorPerceptionBlueprintInfo();
};

