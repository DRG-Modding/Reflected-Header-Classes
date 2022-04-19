#pragma once
#include "CoreMinimal.h"
#include "NiagaraEventReceiverEmitterAction.h"
#include "NiagaraEventReceiverEmitterAction_SpawnParticles.generated.h"

UCLASS(EditInlineNew)
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NumParticles;
    
    UNiagaraEventReceiverEmitterAction_SpawnParticles();
};

