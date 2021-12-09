#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequenceID.h"
#include "MovieSceneOrderedEvaluationKey.h"
#include "MovieSceneEvaluationMetaData.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEvaluationMetaData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FMovieSceneSequenceID> ActiveSequences;
    
    UPROPERTY()
    TArray<FMovieSceneOrderedEvaluationKey> ActiveEntities;
    
    UPROPERTY()
    TMap<FMovieSceneSequenceID, uint32> SubTemplateSerialNumbers;
    
    MOVIESCENE_API FMovieSceneEvaluationMetaData();
};

