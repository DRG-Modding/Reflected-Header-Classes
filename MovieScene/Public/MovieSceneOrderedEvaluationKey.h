#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvaluationKey.h"
#include "MovieSceneOrderedEvaluationKey.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneOrderedEvaluationKey {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneEvaluationKey Key;
    
    UPROPERTY()
    uint16 SetupIndex;
    
    UPROPERTY()
    uint16 TearDownIndex;
    
    MOVIESCENE_API FMovieSceneOrderedEvaluationKey();
};

