#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneKeyInterpolation.generated.h"

UENUM()
enum class EMovieSceneKeyInterpolation {
    Auto,
    User,
    Break,
    Linear,
    Constant,
};

