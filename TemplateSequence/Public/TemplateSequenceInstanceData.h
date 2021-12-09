#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSequenceInstanceData
//CROSS-MODULE INCLUDE: MovieScene MovieSceneEvaluationOperand
#include "TemplateSequenceInstanceData.generated.h"

USTRUCT()
struct FTemplateSequenceInstanceData : public FMovieSceneSequenceInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneEvaluationOperand Operand;
    
    TEMPLATESEQUENCE_API FTemplateSequenceInstanceData();
};

