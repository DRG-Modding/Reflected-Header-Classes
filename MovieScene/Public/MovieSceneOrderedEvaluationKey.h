#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvaluationKey.h"
#include "MovieSceneOrderedEvaluationKey.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneOrderedEvaluationKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEvaluationKey Key;
    
    UPROPERTY(EditAnywhere)
    uint16 SetupIndex;
    
    UPROPERTY(EditAnywhere)
    uint16 TearDownIndex;
    
    MOVIESCENE_API FMovieSceneOrderedEvaluationKey();
};

