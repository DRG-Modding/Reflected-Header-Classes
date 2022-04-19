#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvaluationGroupLUTIndex.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEvaluationGroupLUTIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 NumInitPtrs;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 NumEvalPtrs;
    
    MOVIESCENE_API FMovieSceneEvaluationGroupLUTIndex();
};

