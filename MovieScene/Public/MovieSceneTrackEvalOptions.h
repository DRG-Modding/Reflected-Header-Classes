#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTrackEvalOptions.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneTrackEvalOptions {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 bCanEvaluateNearestSection: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEvalNearestSection: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEvaluateInPreroll: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEvaluateInPostroll: 1;
    
    UPROPERTY()
    uint8 bEvaluateNearestSection: 1;
    
    MOVIESCENE_API FMovieSceneTrackEvalOptions();
};

