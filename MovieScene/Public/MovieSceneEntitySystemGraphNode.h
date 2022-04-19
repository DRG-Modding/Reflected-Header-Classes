#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEntitySystemGraphNode.generated.h"

class UMovieSceneEntitySystem;

USTRUCT()
struct FMovieSceneEntitySystemGraphNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UMovieSceneEntitySystem* System;
    
    MOVIESCENE_API FMovieSceneEntitySystemGraphNode();
};

