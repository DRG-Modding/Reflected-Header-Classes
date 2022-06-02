#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "ENiagaraSystemSpawnSectionStartBehavior.h"
#include "ENiagaraSystemSpawnSectionEndBehavior.h"
#include "ENiagaraSystemSpawnSectionEvaluateBehavior.h"
#include "ENiagaraAgeUpdateMode.h"
#include "MovieSceneNiagaraSystemSpawnSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior;
    
    UPROPERTY(EditAnywhere)
    ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior;
    
    UPROPERTY(EditAnywhere)
    ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraAgeUpdateMode AgeUpdateMode;
    
public:
    UMovieSceneNiagaraSystemSpawnSection();
};

