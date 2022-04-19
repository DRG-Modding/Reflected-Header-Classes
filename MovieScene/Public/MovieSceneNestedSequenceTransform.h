#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTimeTransform.h"
#include "MovieSceneTimeWarping.h"
#include "MovieSceneNestedSequenceTransform.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneNestedSequenceTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneTimeTransform LinearTransform;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneTimeWarping Warping;
    
    MOVIESCENE_API FMovieSceneNestedSequenceTransform();
};

