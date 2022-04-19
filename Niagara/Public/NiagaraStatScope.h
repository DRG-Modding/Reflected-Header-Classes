#pragma once
#include "CoreMinimal.h"
#include "NiagaraStatScope.generated.h"

USTRUCT()
struct FNiagaraStatScope {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName FullName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName FriendlyName;
    
    NIAGARA_API FNiagaraStatScope();
};

