#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCompiledSequenceFlagStruct.generated.h"

USTRUCT()
struct FMovieSceneCompiledSequenceFlagStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint8 bParentSequenceRequiresLowerFence: 1;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint8 bParentSequenceRequiresUpperFence: 1;
    
    MOVIESCENE_API FMovieSceneCompiledSequenceFlagStruct();
};

