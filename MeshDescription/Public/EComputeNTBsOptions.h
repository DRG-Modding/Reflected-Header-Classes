#pragma once
#include "CoreMinimal.h"
#include "EComputeNTBsOptions.generated.h"

UENUM()
enum class EComputeNTBsOptions {
    None,
    Normals,
    Tangents,
    WeightedNTBs = 0x4,
};

