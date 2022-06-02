#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequenceID.h"
#include "MovieSceneRootEvaluationTemplateInstance.generated.h"

class UMovieSceneSequence;
class UMovieSceneCompiledDataManager;
class UMovieSceneEntitySystemLinker;
class UObject;

USTRUCT(BlueprintType)
struct FMovieSceneRootEvaluationTemplateInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UMovieSceneSequence> WeakRootSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieSceneCompiledDataManager* CompiledDataManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieSceneEntitySystemLinker* EntitySystemLinker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMovieSceneSequenceID, UObject*> DirectorInstances;
    
public:
    MOVIESCENE_API FMovieSceneRootEvaluationTemplateInstance();
};

