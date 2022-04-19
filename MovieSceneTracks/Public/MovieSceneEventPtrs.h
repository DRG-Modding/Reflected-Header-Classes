#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEventPtrs.generated.h"

class UFunction;

USTRUCT(BlueprintType)
struct FMovieSceneEventPtrs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UFunction* Function;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TFieldPath<FProperty> BoundObjectProperty;
    
    MOVIESCENETRACKS_API FMovieSceneEventPtrs();
};

