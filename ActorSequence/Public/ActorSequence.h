#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequence -FallbackName=MovieSceneSequence
#include "ActorSequenceObjectReferenceMap.h"
#include "ActorSequence.generated.h"

class UMovieScene;

UCLASS(DefaultToInstanced)
class ACTORSEQUENCE_API UActorSequence : public UMovieSceneSequence {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(AllowPrivateAccess=true))
    UMovieScene* MovieScene;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FActorSequenceObjectReferenceMap ObjectReferences;
    
public:
    UActorSequence();
};

