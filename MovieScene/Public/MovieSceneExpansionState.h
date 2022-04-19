#pragma once
#include "CoreMinimal.h"
#include "MovieSceneExpansionState.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneExpansionState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bExpanded;
    
    MOVIESCENE_API FMovieSceneExpansionState();
};

