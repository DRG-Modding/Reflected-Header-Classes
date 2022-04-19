#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "MovieSceneEntityProvider.h"
#include "MovieSceneEvaluationHook.h"
#include "MovieSceneHookSection.generated.h"

UCLASS()
class MOVIESCENE_API UMovieSceneHookSection : public UMovieSceneSection, public IMovieSceneEntityProvider, public IMovieSceneEvaluationHook {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint8 bRequiresRangedHook: 1;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint8 bRequiresTriggerHooks: 1;
    
public:
    UMovieSceneHookSection();
    
    // Fix for true pure virtual functions not being implemented
};

