#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneBlendType.generated.h"

UENUM()
enum class EMovieSceneBlendType : uint8 {
    Invalid,
    Absolute,
    Additive,
    Relative = 0x4,
};

