#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTrackIdentifier.h"
#include "MovieSceneSequenceID.h"
#include "MovieSceneEvaluationFieldTrackPtr.generated.h"

USTRUCT()
struct FMovieSceneEvaluationFieldTrackPtr {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneSequenceID SequenceID;
    
    UPROPERTY()
    FMovieSceneTrackIdentifier TrackIdentifier;
    
    MOVIESCENE_API FMovieSceneEvaluationFieldTrackPtr();
};

