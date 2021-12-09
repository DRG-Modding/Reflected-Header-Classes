#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvaluationGroupLUTIndex.h"
#include "MovieSceneEvaluationFieldSegmentPtr.h"
#include "MovieSceneEvaluationGroup.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEvaluationGroup {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FMovieSceneEvaluationGroupLUTIndex> LUTIndices;
    
    UPROPERTY()
    TArray<FMovieSceneEvaluationFieldSegmentPtr> SegmentPtrLUT;
    
    MOVIESCENE_API FMovieSceneEvaluationGroup();
};

