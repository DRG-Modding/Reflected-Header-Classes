#pragma once
#include "CoreMinimal.h"
#include "ELocationYToSpawnEnum.generated.h"

UENUM(BlueprintType)
enum class ELocationYToSpawnEnum : uint8 {
    ChaosNiagara_LocationYToSpawn_None,
    ChaosNiagara_LocationYToSpawn_Min,
    ChaosNiagara_LocationYToSpawn_Max,
    ChaosNiagara_LocationYToSpawn_MinMax,
    ChaosNiagara_Max,
};

