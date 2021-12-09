#pragma once
#include "CoreMinimal.h"
#include "MovieSceneParticleChannel.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSection
#include "MovieSceneParticleSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneParticleSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneParticleChannel ParticleKeys;
    
    UMovieSceneParticleSection();
};

