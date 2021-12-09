#pragma once
#include "CoreMinimal.h"
#include "AIPredictionEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct AIMODULE_API FAIPredictionEvent {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* Requestor;
    
    UPROPERTY()
    AActor* PredictedActor;
    
    FAIPredictionEvent();
};

