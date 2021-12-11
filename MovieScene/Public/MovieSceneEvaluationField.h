#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvaluationMetaData.h"
#include "MovieSceneFrameRange.h"
#include "MovieSceneEvaluationGroup.h"
#include "MovieSceneEvaluationField.generated.h"

USTRUCT()
struct FMovieSceneEvaluationField {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FMovieSceneFrameRange> Ranges;
    
    UPROPERTY()
    TArray<FMovieSceneEvaluationGroup> Groups;
    
    UPROPERTY()
    TArray<FMovieSceneEvaluationMetaData> MetaData;
    
public:
    MOVIESCENE_API FMovieSceneEvaluationField();
};

