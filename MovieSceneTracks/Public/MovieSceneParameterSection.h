#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSection
#include "ScalarParameterNameAndCurve.h"
#include "BoolParameterNameAndCurve.h"
#include "Vector2DParameterNameAndCurves.h"
#include "VectorParameterNameAndCurves.h"
#include "ColorParameterNameAndCurves.h"
#include "TransformParameterNameAndCurves.h"
#include "MovieSceneParameterSection.generated.h"

UCLASS()
class MOVIESCENETRACKS_API UMovieSceneParameterSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FBoolParameterNameAndCurve> BoolParameterNamesAndCurves;
    
    UPROPERTY()
    TArray<FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves;
    
    UPROPERTY()
    TArray<FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves;
    
    UPROPERTY()
    TArray<FVectorParameterNameAndCurves> VectorParameterNamesAndCurves;
    
    UPROPERTY()
    TArray<FColorParameterNameAndCurves> ColorParameterNamesAndCurves;
    
    UPROPERTY()
    TArray<FTransformParameterNameAndCurves> TransformParameterNamesAndCurves;
    
public:
    UMovieSceneParameterSection();
};

