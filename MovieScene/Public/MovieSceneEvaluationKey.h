#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequenceID.h"
#include "MovieSceneTrackIdentifier.h"
#include "MovieSceneEvaluationKey.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEvaluationKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneSequenceID SequenceID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneTrackIdentifier TrackIdentifier;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint32 SectionIndex;
    
    MOVIESCENE_API FMovieSceneEvaluationKey();
};

