#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvaluationTemplateSerialNumber.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEvaluationTemplateSerialNumber {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    uint32 Value;
    
public:
    MOVIESCENE_API FMovieSceneEvaluationTemplateSerialNumber();
};

