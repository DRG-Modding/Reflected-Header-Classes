#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSection
#include "MovieSceneParticleChannel.h"
#include "MovieSceneParticleSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneParticleSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneParticleChannel ParticleKeys;
    
    UMovieSceneParticleSection();
};

