#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "MissionMutatorManager.generated.h"

UCLASS(Abstract)
class UMissionMutatorManager : public UActorComponent {
    GENERATED_BODY()
public:
    UMissionMutatorManager();
};

