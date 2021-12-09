#pragma once
#include "CoreMinimal.h"
#include "ENiagaraScriptUsage.generated.h"

UENUM()
enum class ENiagaraScriptUsage : uint8 {
    Function,
    Module,
    DynamicInput,
    ParticleSpawnScript,
    ParticleSpawnScriptInterpolated,
    ParticleUpdateScript,
    ParticleEventScript,
    ParticleSimulationStageScript,
    ParticleGPUComputeScript,
    EmitterSpawnScript,
    EmitterUpdateScript,
    SystemSpawnScript,
    SystemUpdateScript,
};

