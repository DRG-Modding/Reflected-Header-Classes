#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "NiagaraPerfBaselineActor.generated.h"

class UTextRenderComponent;
class UNiagaraBaselineController;

UCLASS(Blueprintable)
class NIAGARA_API ANiagaraPerfBaselineActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraBaselineController* Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* Label;
    
    ANiagaraPerfBaselineActor();
};

