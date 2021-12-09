#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvaluationFieldTrackPtr.h"
#include "MovieSceneSegmentIdentifier.h"
#include "MovieSceneEvaluationFieldSegmentPtr.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEvaluationFieldSegmentPtr : public FMovieSceneEvaluationFieldTrackPtr {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneSegmentIdentifier SegmentID;
    
    MOVIESCENE_API FMovieSceneEvaluationFieldSegmentPtr();
};

