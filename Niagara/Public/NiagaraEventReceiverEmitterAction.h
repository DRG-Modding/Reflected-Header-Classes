#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "NiagaraEventReceiverEmitterAction.generated.h"

UCLASS(Abstract)
class UNiagaraEventReceiverEmitterAction : public UObject {
    GENERATED_BODY()
public:
    UNiagaraEventReceiverEmitterAction();
};

