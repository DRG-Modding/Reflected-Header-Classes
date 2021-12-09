#pragma once
#include "CoreMinimal.h"
#include "NiagaraScriptExecutionPaddingInfo.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraScriptExecutionPaddingInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint16 SrcOffset;
    
    UPROPERTY()
    uint16 DestOffset;
    
    UPROPERTY()
    uint16 SrcSize;
    
    UPROPERTY()
    uint16 DestSize;
    
    NIAGARA_API FNiagaraScriptExecutionPaddingInfo();
};

