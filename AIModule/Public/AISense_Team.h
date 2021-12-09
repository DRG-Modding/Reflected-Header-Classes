#pragma once
#include "CoreMinimal.h"
#include "AISense.h"
#include "AITeamStimulusEvent.h"
#include "AISense_Team.generated.h"

UCLASS()
class AIMODULE_API UAISense_Team : public UAISense {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FAITeamStimulusEvent> RegisteredEvents;
    
    UAISense_Team();
};

