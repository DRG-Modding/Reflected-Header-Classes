#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "LandscapeGizmoActor.generated.h"

UCLASS(MinimalAPI, NotPlaceable)
class ALandscapeGizmoActor : public AActor {
    GENERATED_BODY()
public:
    ALandscapeGizmoActor();
};

