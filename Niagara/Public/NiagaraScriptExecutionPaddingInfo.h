#pragma once
#include "CoreMinimal.h"
#include "NiagaraScriptExecutionPaddingInfo.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraScriptExecutionPaddingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint16 SrcOffset;
    
    UPROPERTY(EditAnywhere)
    uint16 DestOffset;
    
    UPROPERTY(EditAnywhere)
    uint16 SrcSize;
    
    UPROPERTY(EditAnywhere)
    uint16 DestSize;
    
    NIAGARA_API FNiagaraScriptExecutionPaddingInfo();
};

