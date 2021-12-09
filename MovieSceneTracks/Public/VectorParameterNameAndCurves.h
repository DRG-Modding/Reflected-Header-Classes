#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneFloatChannel
#include "VectorParameterNameAndCurves.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENETRACKS_API FVectorParameterNameAndCurves {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName ParameterName;
    
    UPROPERTY()
    FMovieSceneFloatChannel XCurve;
    
    UPROPERTY()
    FMovieSceneFloatChannel YCurve;
    
    UPROPERTY()
    FMovieSceneFloatChannel ZCurve;
    
    FVectorParameterNameAndCurves();
};

