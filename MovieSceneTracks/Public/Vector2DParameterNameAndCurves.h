#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneFloatChannel
#include "Vector2DParameterNameAndCurves.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENETRACKS_API FVector2DParameterNameAndCurves {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName ParameterName;
    
    UPROPERTY()
    FMovieSceneFloatChannel XCurve;
    
    UPROPERTY()
    FMovieSceneFloatChannel YCurve;
    
    FVector2DParameterNameAndCurves();
};

