#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "LandscapeGizmoActor.generated.h"

UCLASS(MinimalAPI, NotPlaceable)
class ALandscapeGizmoActor : public AActor {
    GENERATED_BODY()
public:
    ALandscapeGizmoActor();
};

