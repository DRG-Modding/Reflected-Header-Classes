#pragma once
#include "CoreMinimal.h"
#include "MovieSceneWarpCounter.generated.h"

USTRUCT()
struct FMovieSceneWarpCounter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<uint32> WarpCounts;
    
    MOVIESCENE_API FMovieSceneWarpCounter();
};

