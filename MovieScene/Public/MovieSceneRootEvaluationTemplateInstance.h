#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequenceID.h"
#include "MovieSceneRootEvaluationTemplateInstance.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FMovieSceneRootEvaluationTemplateInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<FMovieSceneSequenceID, UObject*> DirectorInstances;
    
public:
    MOVIESCENE_API FMovieSceneRootEvaluationTemplateInstance();
};

