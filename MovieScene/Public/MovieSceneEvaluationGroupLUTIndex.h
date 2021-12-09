#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvaluationGroupLUTIndex.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEvaluationGroupLUTIndex {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 LUTOffset;
    
    UPROPERTY()
    int32 NumInitPtrs;
    
    UPROPERTY()
    int32 NumEvalPtrs;
    
    MOVIESCENE_API FMovieSceneEvaluationGroupLUTIndex();
};

