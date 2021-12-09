#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "SeasonReplicatorComponent.generated.h"

class USeasonEventData;

UCLASS()
class USeasonReplicatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFUNCTION(NetMulticast, Reliable)
    void CompleteSeasonEvent(USeasonEventData* inEvent);
    
    USeasonReplicatorComponent();
};

