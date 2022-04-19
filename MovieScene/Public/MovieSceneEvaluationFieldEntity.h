#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvaluationFieldEntityKey.h"
#include "MovieSceneEvaluationFieldEntity.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEvaluationFieldEntity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneEvaluationFieldEntityKey Key;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 SharedMetaDataIndex;
    
    MOVIESCENE_API FMovieSceneEvaluationFieldEntity();
};

