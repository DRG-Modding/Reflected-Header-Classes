#pragma once
#include "CoreMinimal.h"
#include "EParticleAllocationMode.generated.h"

UENUM()
enum class EParticleAllocationMode : uint8 {
    AutomaticEstimate,
    ManualEstimate,
};

