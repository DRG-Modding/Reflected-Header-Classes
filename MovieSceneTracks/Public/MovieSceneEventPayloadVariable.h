#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEventPayloadVariable.generated.h"

USTRUCT()
struct FMovieSceneEventPayloadVariable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString Value;
    
    MOVIESCENETRACKS_API FMovieSceneEventPayloadVariable();
};

