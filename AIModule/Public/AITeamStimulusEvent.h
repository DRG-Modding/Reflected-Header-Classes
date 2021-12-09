#pragma once
#include "CoreMinimal.h"
#include "AITeamStimulusEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct AIMODULE_API FAITeamStimulusEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    AActor* Broadcaster;
    
public:
    UPROPERTY()
    AActor* enemy;
    
    FAITeamStimulusEvent();
};

