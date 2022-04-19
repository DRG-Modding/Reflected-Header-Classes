#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEntitySystem.h"
#include "MovieSceneTrackInstanceSystem.generated.h"

class UMovieSceneTrackInstanceInstantiator;

UCLASS()
class MOVIESCENE_API UMovieSceneTrackInstanceSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UMovieSceneTrackInstanceInstantiator* Instantiator;
    
public:
    UMovieSceneTrackInstanceSystem();
};

