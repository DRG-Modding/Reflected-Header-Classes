#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneEvalTemplate
//CROSS-MODULE INCLUDE: MovieScene MovieSceneFloatChannel
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "MovieSceneFadeSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneFadeSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneFloatChannel FadeCurve;
    
    UPROPERTY()
    FLinearColor FadeColor;
    
    UPROPERTY()
    uint8 bFadeAudio: 1;
    
public:
    MOVIESCENETRACKS_API FMovieSceneFadeSectionTemplate();
};

