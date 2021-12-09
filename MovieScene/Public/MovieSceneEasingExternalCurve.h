#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "MovieSceneEasingFunction.h"
#include "MovieSceneEasingExternalCurve.generated.h"

class UCurveFloat;

UCLASS()
class MOVIESCENE_API UMovieSceneEasingExternalCurve : public UObject, public IMovieSceneEasingFunction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UCurveFloat* Curve;
    
    UMovieSceneEasingExternalCurve();
};

