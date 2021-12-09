#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEventPayloadVariable.generated.h"

USTRUCT()
struct FMovieSceneEventPayloadVariable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Value;
    
    MOVIESCENETRACKS_API FMovieSceneEventPayloadVariable();
};

