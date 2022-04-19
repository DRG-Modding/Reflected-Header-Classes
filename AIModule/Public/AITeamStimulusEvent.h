#pragma once
#include "CoreMinimal.h"
#include "AITeamStimulusEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct AIMODULE_API FAITeamStimulusEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    AActor* Broadcaster;
    
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    AActor* enemy;
    
    FAITeamStimulusEvent();
};

