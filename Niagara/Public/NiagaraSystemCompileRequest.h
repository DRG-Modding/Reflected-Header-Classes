#pragma once
#include "CoreMinimal.h"
#include "NiagaraSystemCompileRequest.generated.h"

class UObject;

USTRUCT()
struct FNiagaraSystemCompileRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UObject*> RootObjects;
    
    NIAGARA_API FNiagaraSystemCompileRequest();
};

