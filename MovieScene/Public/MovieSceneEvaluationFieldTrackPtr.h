#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequenceID.h"
#include "MovieSceneTrackIdentifier.h"
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

