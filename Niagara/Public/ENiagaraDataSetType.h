#pragma once
#include "CoreMinimal.h"
#include "ENiagaraDataSetType.generated.h"

UENUM()
enum class ENiagaraDataSetType : uint8 {
    ParticleData,
    Shared,
    Event,
};

