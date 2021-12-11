#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEasingFunction.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "EMovieSceneBuiltInEasing.h"
#include "MovieSceneBuiltInEasingFunction.generated.h"

UCLASS()
class MOVIESCENE_API UMovieSceneBuiltInEasingFunction : public UObject, public IMovieSceneEasingFunction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EMovieSceneBuiltInEasing Type;
    
    UMovieSceneBuiltInEasingFunction();
    
    // Fix for true pure virtual functions not being implemented
};

