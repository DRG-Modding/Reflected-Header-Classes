#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Volume
//CROSS-MODULE INCLUDE: Engine NavAgentSelector
#include "NavMeshBoundsVolume.generated.h"

UCLASS()
class NAVIGATIONSYSTEM_API ANavMeshBoundsVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FNavAgentSelector SupportedAgents;
    
    ANavMeshBoundsVolume();
};

