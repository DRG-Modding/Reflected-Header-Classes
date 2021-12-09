#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneFloatChannel
#include "ScalarParameterNameAndCurve.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENETRACKS_API FScalarParameterNameAndCurve {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName ParameterName;
    
    UPROPERTY()
    FMovieSceneFloatChannel ParameterCurve;
    
    FScalarParameterNameAndCurve();
};

