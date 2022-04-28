#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequence.h"
#include "TestMovieSceneSequence.generated.h"

class UMovieScene;

UCLASS(Blueprintable, MinimalAPI)
class UTestMovieSceneSequence : public UMovieSceneSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMovieScene* MovieScene;
    
    UTestMovieSceneSequence();
};

