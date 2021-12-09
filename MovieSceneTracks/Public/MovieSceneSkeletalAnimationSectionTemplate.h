#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneEvalTemplate
#include "MovieSceneSkeletalAnimationSectionTemplateParameters.h"
#include "MovieSceneSkeletalAnimationSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneSkeletalAnimationSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneSkeletalAnimationSectionTemplateParameters Params;
    
    MOVIESCENETRACKS_API FMovieSceneSkeletalAnimationSectionTemplate();
};

