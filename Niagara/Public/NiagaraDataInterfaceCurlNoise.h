#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceCurlNoise.generated.h"

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Seed;
    
    UNiagaraDataInterfaceCurlNoise();
};

