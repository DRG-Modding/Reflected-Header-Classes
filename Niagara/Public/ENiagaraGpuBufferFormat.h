#pragma once
#include "CoreMinimal.h"
#include "ENiagaraGpuBufferFormat.generated.h"

UENUM()
enum class ENiagaraGpuBufferFormat : uint8 {
    Float,
    HalfFloat,
    UnsignedNormalizedByte,
    Max,
};

