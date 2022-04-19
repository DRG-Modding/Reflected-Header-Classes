#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "MovieSceneParticleChannel.h"
#include "MovieSceneParticleSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneParticleSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneParticleChannel ParticleKeys;
    
    MOVIESCENETRACKS_API FMovieSceneParticleSectionTemplate();
};

