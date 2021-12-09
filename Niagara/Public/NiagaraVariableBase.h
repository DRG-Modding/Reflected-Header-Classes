#pragma once
#include "CoreMinimal.h"
#include "NiagaraTypeDefinition.h"
#include "NiagaraVariableBase.generated.h"

USTRUCT()
struct FNiagaraVariableBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName Name;
    
    UPROPERTY(EditAnywhere)
    FNiagaraTypeDefinition TypeDef;
    
public:
    NIAGARA_API FNiagaraVariableBase();
};

