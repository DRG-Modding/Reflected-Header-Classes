#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTrackLabels.generated.h"

USTRUCT()
struct FMovieSceneTrackLabels {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FString> Strings;
    
    MOVIESCENE_API FMovieSceneTrackLabels();
};

