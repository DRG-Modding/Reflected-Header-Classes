#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ProceduralObjectColliders.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UProceduralObjectColliders : public UActorComponent {
    GENERATED_BODY()
public:
    UProceduralObjectColliders();
};

