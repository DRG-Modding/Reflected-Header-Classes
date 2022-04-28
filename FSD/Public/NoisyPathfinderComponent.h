#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "NoisyPathfinderComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNoisyPathfinderComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UNoisyPathfinderComponent();
};

