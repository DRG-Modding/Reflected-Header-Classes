#pragma once
#include "CoreMinimal.h"
#include "EMovieScenePlayerStatus.generated.h"

UENUM()
namespace EMovieScenePlayerStatus {
    enum Type {
        Stopped,
        Playing,
        Scrubbing,
        Jumping,
        Stepping,
        Paused,
        MAX,
    };
}

