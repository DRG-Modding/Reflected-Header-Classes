#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceArray.h"
#include "NiagaraDataInterfaceArrayFloat.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceArrayFloat : public UNiagaraDataInterfaceArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<float> FloatData;
    
    UNiagaraDataInterfaceArrayFloat();
};

