#pragma once
#include "CoreMinimal.h"
#include "NiagaraParameterStore.h"
#include "NiagaraScriptInstanceParameterStore.generated.h"

USTRUCT()
struct FNiagaraScriptInstanceParameterStore : public FNiagaraParameterStore {
    GENERATED_BODY()
public:
    NIAGARA_API FNiagaraScriptInstanceParameterStore();
};

