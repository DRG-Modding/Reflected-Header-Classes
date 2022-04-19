#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvaluationFieldEntityKey.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FMovieSceneEvaluationFieldEntityKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> EntityOwner;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint32 EntityID;
    
    MOVIESCENE_API FMovieSceneEvaluationFieldEntityKey();
};

