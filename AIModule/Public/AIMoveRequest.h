#pragma once
#include "CoreMinimal.h"
#include "AIMoveRequest.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct AIMODULE_API FAIMoveRequest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    AActor* GoalActor;
    
public:
    FAIMoveRequest();
};

