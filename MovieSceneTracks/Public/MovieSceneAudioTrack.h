#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneNameableTrack
#include "MovieSceneAudioTrack.generated.h"

class UMovieSceneSection;

UCLASS()
class MOVIESCENETRACKS_API UMovieSceneAudioTrack : public UMovieSceneNameableTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    TArray<UMovieSceneSection*> AudioSections;
    
public:
    UMovieSceneAudioTrack();
};

