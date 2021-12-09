#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneEvalTemplate
#include "MovieSceneParticleChannel.h"
#include "MovieSceneParticleSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneParticleSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneParticleChannel ParticleKeys;
    
    MOVIESCENETRACKS_API FMovieSceneParticleSectionTemplate();
};

