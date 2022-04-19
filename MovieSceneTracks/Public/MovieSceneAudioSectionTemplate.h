#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "MovieSceneAudioSectionTemplate.generated.h"

class UMovieSceneAudioSection;

USTRUCT()
struct FMovieSceneAudioSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UMovieSceneAudioSection* AudioSection;
    
    MOVIESCENETRACKS_API FMovieSceneAudioSectionTemplate();
};

