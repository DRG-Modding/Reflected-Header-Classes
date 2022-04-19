#pragma once
#include "CoreMinimal.h"
#include "TrackInstanceInputComponent.generated.h"

class UMovieSceneSection;

USTRUCT()
struct FTrackInstanceInputComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UMovieSceneSection* Section;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 OutputIndex;
    
    MOVIESCENE_API FTrackInstanceInputComponent();
};

