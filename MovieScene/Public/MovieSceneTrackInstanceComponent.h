#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MovieSceneTrackInstanceComponent.generated.h"

class UMovieSceneSection;
class UMovieSceneTrackInstance;

USTRUCT()
struct FMovieSceneTrackInstanceComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UMovieSceneSection* Owner;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMovieSceneTrackInstance> TrackInstanceClass;
    
    MOVIESCENE_API FMovieSceneTrackInstanceComponent();
};

