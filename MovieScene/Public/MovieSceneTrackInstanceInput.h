#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTrackInstanceInput.generated.h"

class UMovieSceneSection;

USTRUCT(BlueprintType)
struct FMovieSceneTrackInstanceInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMovieSceneSection* Section;
    
    MOVIESCENE_API FMovieSceneTrackInstanceInput();
};

