#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEventParameters.h"
#include "EventPayload.generated.h"

USTRUCT(BlueprintType)
struct FEventPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName EventName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMovieSceneEventParameters Parameters;
    
    MOVIESCENETRACKS_API FEventPayload();
};

