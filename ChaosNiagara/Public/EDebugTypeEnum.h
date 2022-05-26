#pragma once
#include "CoreMinimal.h"
#include "EDebugTypeEnum.generated.h"

UENUM(BlueprintType)
enum class EDebugTypeEnum : uint8 {
    ChaosNiagara_DebugType_NoDebug,
    ChaosNiagara_DebugType_ColorBySolver,
    ChaosNiagara_DebugType_ColorByParticleIndex,
    ChaosNiagara_Max,
};

