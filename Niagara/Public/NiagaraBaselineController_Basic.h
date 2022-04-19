#pragma once
#include "CoreMinimal.h"
#include "NiagaraBaselineController.h"
#include "NiagaraBaselineController_Basic.generated.h"

class UNiagaraComponent;

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraBaselineController_Basic : public UNiagaraBaselineController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumInstances;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> SpawnedComponents;
    
public:
    UNiagaraBaselineController_Basic();
};

