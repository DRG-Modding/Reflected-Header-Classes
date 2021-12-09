#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneCompletionMode.generated.h"

UENUM()
enum class EMovieSceneCompletionMode : uint8 {
    KeepState,
    RestoreState,
    ProjectDefault,
};

