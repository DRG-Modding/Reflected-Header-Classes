#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceParticleRead.generated.h"

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString EmitterName;
    
    UNiagaraDataInterfaceParticleRead();
};

