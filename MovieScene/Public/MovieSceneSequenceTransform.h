#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTimeTransform.h"
#include "MovieSceneNestedSequenceTransform.h"
#include "MovieSceneSequenceTransform.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSequenceTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneTimeTransform LinearTransform;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneNestedSequenceTransform> NestedTransforms;
    
    MOVIESCENE_API FMovieSceneSequenceTransform();
};

