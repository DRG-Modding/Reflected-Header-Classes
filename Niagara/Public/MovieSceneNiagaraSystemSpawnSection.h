#pragma once
#include "CoreMinimal.h"
#include "ENiagaraSystemSpawnSectionStartBehavior.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "ENiagaraSystemSpawnSectionEndBehavior.h"
#include "ENiagaraSystemSpawnSectionEvaluateBehavior.h"
#include "ENiagaraAgeUpdateMode.h"
#include "MovieSceneNiagaraSystemSpawnSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraAgeUpdateMode AgeUpdateMode;
    
public:
    UMovieSceneNiagaraSystemSpawnSection();
};

