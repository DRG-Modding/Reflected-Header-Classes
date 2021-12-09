#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneEvalTemplate
#include "MovieSceneAdditiveCameraAnimationTemplate.generated.h"

USTRUCT()
struct FMovieSceneAdditiveCameraAnimationTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    MOVIESCENETRACKS_API FMovieSceneAdditiveCameraAnimationTemplate();
};

