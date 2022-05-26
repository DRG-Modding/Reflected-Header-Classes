#pragma once
#include "CoreMinimal.h"
#include "ERandomVelocityGenerationTypeEnum.generated.h"

UENUM(BlueprintType)
enum class ERandomVelocityGenerationTypeEnum : uint8 {
    ChaosNiagara_RandomVelocityGenerationType_RandomDistribution,
    ChaosNiagara_RandomVelocityGenerationType_RandomDistributionWithStreamers,
    ChaosNiagara_RandomVelocityGenerationType_CollisionNormalBased,
    ChaosNiagara_Max,
};

