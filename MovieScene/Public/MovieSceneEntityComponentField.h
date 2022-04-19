#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvaluationFieldEntity.h"
#include "MovieSceneEvaluationFieldEntityTree.h"
#include "MovieSceneEvaluationFieldEntityMetaData.h"
#include "MovieSceneEvaluationFieldSharedEntityMetaData.h"
#include "MovieSceneEntityComponentField.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENE_API FMovieSceneEntityComponentField {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneEvaluationFieldEntityTree PersistentEntityTree;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneEvaluationFieldEntityTree OneShotEntityTree;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneEvaluationFieldEntity> Entities;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneEvaluationFieldEntityMetaData> EntityMetaData;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData;
    
public:
    FMovieSceneEntityComponentField();
};

