#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSignedObject.h"
#include "MovieSceneEvaluationTemplate.h"
#include "EMovieSceneCompletionMode.h"
#include "MovieSceneObjectBindingID.h"
#include "MovieSceneSequence.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class UMovieSceneSequence : public UMovieSceneSignedObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneEvaluationTemplate PrecompiledEvaluationTemplate;
    
    UPROPERTY(Config)
    EMovieSceneCompletionMode DefaultCompletionMode;
    
protected:
    UPROPERTY()
    bool bParentContextsAreSignificant;
    
    UPROPERTY()
    bool bPlayableDirectly;
    
public:
    UFUNCTION(BlueprintPure)
    TArray<FMovieSceneObjectBindingID> FindBindingsByTag(FName InBindingName) const;
    
    UFUNCTION(BlueprintPure)
    FMovieSceneObjectBindingID FindBindingByTag(FName InBindingName) const;
    
    UMovieSceneSequence();
};

