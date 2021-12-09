#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "MovieSceneEasingFunction.h"
#include "EMovieSceneBuiltInEasing.h"
#include "MovieSceneBuiltInEasingFunction.generated.h"

UCLASS()
class MOVIESCENE_API UMovieSceneBuiltInEasingFunction : public UObject, public IMovieSceneEasingFunction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EMovieSceneBuiltInEasing Type;
    
    UMovieSceneBuiltInEasingFunction();
};

