#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSection
#include "MovieSceneMediaPlayerPropertySection.generated.h"

class UMediaSource;

UCLASS(MinimalAPI)
class UMovieSceneMediaPlayerPropertySection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMediaSource* MediaSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLoop;
    
    UMovieSceneMediaPlayerPropertySection();
};

