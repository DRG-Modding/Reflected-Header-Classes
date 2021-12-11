#pragma once
#include "CoreMinimal.h"
#include "EnvQueryTest_Pathfinding.h"
#include "AIDataProviderFloatValue.h"
#include "EnvQueryTest_PathfindingBatch.generated.h"

UCLASS()
class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    FAIDataProviderFloatValue ScanRangeMultiplier;
    
    UEnvQueryTest_PathfindingBatch();
};

