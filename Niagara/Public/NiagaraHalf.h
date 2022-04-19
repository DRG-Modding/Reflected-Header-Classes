#pragma once
#include "CoreMinimal.h"
#include "NiagaraHalf.generated.h"

USTRUCT()
struct FNiagaraHalf {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Value;
    
    NIAGARA_API FNiagaraHalf();
};

