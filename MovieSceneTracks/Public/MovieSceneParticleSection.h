#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneParticleChannel.h"
#include "MovieSceneParticleSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneParticleSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneParticleChannel ParticleKeys;
    
    UMovieSceneParticleSection();
};

