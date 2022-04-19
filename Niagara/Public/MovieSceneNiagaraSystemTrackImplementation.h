#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackImplementation -FallbackName=MovieSceneTrackImplementation
#include "ENiagaraSystemSpawnSectionStartBehavior.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "ENiagaraSystemSpawnSectionEndBehavior.h"
#include "ENiagaraSystemSpawnSectionEvaluateBehavior.h"
#include "ENiagaraAgeUpdateMode.h"
#include "MovieSceneNiagaraSystemTrackImplementation.generated.h"

USTRUCT()
struct FMovieSceneNiagaraSystemTrackImplementation : public FMovieSceneTrackImplementation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFrameNumber SpawnSectionStartFrame;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFrameNumber SpawnSectionEndFrame;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ENiagaraAgeUpdateMode AgeUpdateMode;
    
public:
    NIAGARA_API FMovieSceneNiagaraSystemTrackImplementation();
};

