#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTimeTransform.h"
#include "MovieSceneNestedSequenceTransform.h"
#include "MovieSceneSequenceTransform.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSequenceTransform {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneTimeTransform LinearTransform;
    
    UPROPERTY()
    TArray<FMovieSceneNestedSequenceTransform> NestedTransforms;
    
    MOVIESCENE_API FMovieSceneSequenceTransform();
};

