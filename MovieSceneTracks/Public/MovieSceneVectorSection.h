#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSection
//CROSS-MODULE INCLUDE: MovieScene MovieSceneFloatChannel
#include "MovieSceneVectorSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneVectorSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneFloatChannel Curves[4];
    
    UPROPERTY()
    int32 ChannelsUsed;
    
public:
    UMovieSceneVectorSection();
};

