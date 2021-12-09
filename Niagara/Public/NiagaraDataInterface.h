#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: NiagaraCore NiagaraDataInterfaceBase
#include "NiagaraDataInterface.generated.h"

UCLASS(Abstract, EditInlineNew)
class NIAGARA_API UNiagaraDataInterface : public UNiagaraDataInterfaceBase {
    GENERATED_BODY()
public:
    UNiagaraDataInterface();
};

