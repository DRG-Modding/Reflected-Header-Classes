#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine TickFunction
#include "NiagaraWorldManagerTickFunction.generated.h"

USTRUCT()
struct FNiagaraWorldManagerTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    NIAGARA_API FNiagaraWorldManagerTickFunction();
};

