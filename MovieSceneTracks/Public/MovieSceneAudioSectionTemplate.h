#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneEvalTemplate
#include "MovieSceneAudioSectionTemplate.generated.h"

class UMovieSceneAudioSection;

USTRUCT()
struct FMovieSceneAudioSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UMovieSceneAudioSection* AudioSection;
    
    MOVIESCENETRACKS_API FMovieSceneAudioSectionTemplate();
};

