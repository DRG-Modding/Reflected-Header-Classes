#pragma once
#include "CoreMinimal.h"
#include "MovieSceneParameterSectionTemplate.h"
#include "MovieSceneParticleParameterSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneParticleParameterSectionTemplate : public FMovieSceneParameterSectionTemplate {
    GENERATED_BODY()
public:
    MOVIESCENETRACKS_API FMovieSceneParticleParameterSectionTemplate();
};

