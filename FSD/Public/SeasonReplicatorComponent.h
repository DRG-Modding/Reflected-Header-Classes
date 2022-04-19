#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "SeasonReplicatorComponent.generated.h"

class USeasonEventData;

UCLASS(meta=(BlueprintSpawnableComponent))
class USeasonReplicatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USeasonReplicatorComponent();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CompleteSeasonEvent(USeasonEventData* inEvent);
    
};

