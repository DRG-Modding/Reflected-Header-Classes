#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSubTrack
#include "TemplateSequenceTrack.generated.h"

UCLASS(MinimalAPI)
class UTemplateSequenceTrack : public UMovieSceneSubTrack {
    GENERATED_BODY()
public:
    UTemplateSequenceTrack();
};

