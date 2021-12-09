#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "MovieSceneSequenceID.h"
#include "MovieSceneEvaluationOperand.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEvaluationOperand {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid ObjectBindingID;
    
    UPROPERTY()
    FMovieSceneSequenceID SequenceID;
    
    MOVIESCENE_API FMovieSceneEvaluationOperand();
};

