#pragma once
#include "CoreMinimal.h"
#include "EScriptExecutionMode.generated.h"

UENUM()
enum class EScriptExecutionMode : uint8 {
    EveryParticle,
    SpawnedParticles,
    SingleParticle,
};

