#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvaluationKey.h"
#include "MovieSceneOrderedEvaluationKey.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneOrderedEvaluationKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneEvaluationKey Key;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint16 SetupIndex;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint16 TearDownIndex;
    
    MOVIESCENE_API FMovieSceneOrderedEvaluationKey();
};

