#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneEvaluationType.generated.h"

UENUM()
enum class EMovieSceneEvaluationType : uint8 {
    FrameLocked,
    WithSubFrames,
};

