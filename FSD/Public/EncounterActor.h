#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EncounterActor.generated.h"

class APawn;

UCLASS(Blueprintable)
class AEncounterActor : public AActor {
    GENERATED_BODY()
public:
    AEncounterActor();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_EncounterHasSpawned(APawn* spawnedPawn);
    
};

