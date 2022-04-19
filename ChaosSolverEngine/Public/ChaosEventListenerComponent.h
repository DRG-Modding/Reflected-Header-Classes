#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ChaosEventListenerComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class CHAOSSOLVERENGINE_API UChaosEventListenerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UChaosEventListenerComponent();
};

