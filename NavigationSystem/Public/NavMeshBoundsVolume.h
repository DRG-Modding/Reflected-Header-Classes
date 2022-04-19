#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavAgentSelector -FallbackName=NavAgentSelector
#include "NavMeshBoundsVolume.generated.h"

UCLASS()
class NAVIGATIONSYSTEM_API ANavMeshBoundsVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavAgentSelector SupportedAgents;
    
    ANavMeshBoundsVolume();
};

