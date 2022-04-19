#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "MovieSceneSubTrack.generated.h"

class UMovieSceneSection;

UCLASS()
class MOVIESCENE_API UMovieSceneSubTrack : public UMovieSceneNameableTrack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> Sections;
    
public:
    UMovieSceneSubTrack();
};

