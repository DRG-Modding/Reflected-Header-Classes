#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvaluationFieldTrackPtr.h"
#include "MovieSceneFieldEntry_EvaluationTrack.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneFieldEntry_EvaluationTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneEvaluationFieldTrackPtr TrackPtr;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint16 NumChildren;
    
    MOVIESCENE_API FMovieSceneFieldEntry_EvaluationTrack();
};

