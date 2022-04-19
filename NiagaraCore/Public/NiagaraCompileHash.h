#pragma once
#include "CoreMinimal.h"
#include "NiagaraCompileHash.generated.h"

USTRUCT()
struct NIAGARACORE_API FNiagaraCompileHash {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<uint8> DataHash;
    
public:
    FNiagaraCompileHash();
};

