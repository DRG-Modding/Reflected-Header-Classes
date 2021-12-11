#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSignedObject.h"
#include "EMovieSceneCompletionMode.h"
#include "MovieSceneEvaluationTemplate.h"
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
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMovieSceneObjectBindingID> FindBindingsByTag(FName InBindingName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMovieSceneObjectBindingID FindBindingByTag(FName InBindingName) const;
    
    UMovieSceneSequence();
};

