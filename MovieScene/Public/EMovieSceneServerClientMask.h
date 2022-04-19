#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneServerClientMask.generated.h"

UENUM()
enum class EMovieSceneServerClientMask {
    None,
    Server,
    Client,
    All,
};

