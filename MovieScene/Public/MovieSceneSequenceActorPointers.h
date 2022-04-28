#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequenceActorPointers.generated.h"

class AActor;
class UMovieSceneSequenceActor;
class IMovieSceneSequenceActor;

USTRUCT(BlueprintType)
struct FMovieSceneSequenceActorPointers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IMovieSceneSequenceActor> SequenceActorInterface;
    
    MOVIESCENE_API FMovieSceneSequenceActorPointers();
};

