#pragma once
#include "CoreMinimal.h"
#include "ENiagaraSystemSpawnSectionEndBehavior.h"
#include "ENiagaraSystemSpawnSectionEvaluateBehavior.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackImplementation -FallbackName=MovieSceneTrackImplementation
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "ENiagaraSystemSpawnSectionStartBehavior.h"
#include "ENiagaraAgeUpdateMode.h"
#include "MovieSceneNiagaraSystemTrackImplementation.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneNiagaraSystemTrackImplementation : public FMovieSceneTrackImplementation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber SpawnSectionStartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber SpawnSectionEndFrame;
    
    UPROPERTY(EditAnywhere)
    ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior;
    
    UPROPERTY(EditAnywhere)
    ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior;
    
    UPROPERTY(EditAnywhere)
    ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraAgeUpdateMode AgeUpdateMode;
    
public:
    NIAGARA_API FMovieSceneNiagaraSystemTrackImplementation();
};

