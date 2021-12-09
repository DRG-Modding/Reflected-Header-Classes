#pragma once
#include "CoreMinimal.h"
#include "EMovieScenePlayerStatus.generated.h"

UENUM()
namespace EMovieScenePlayerStatus {
    enum Type {
        Stopped,
        Playing,
        Recording,
        Scrubbing,
        Jumping,
        Stepping,
        Paused,
        MAX,
    };
}

