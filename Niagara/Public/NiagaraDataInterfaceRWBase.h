#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceRWBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSet<int32> OutputShaderStages;
    
    UPROPERTY(EditAnywhere)
    TSet<int32> IterationShaderStages;
    
    UNiagaraDataInterfaceRWBase();
};

