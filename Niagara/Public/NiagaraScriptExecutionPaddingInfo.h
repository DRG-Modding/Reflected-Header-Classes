#pragma once
#include "CoreMinimal.h"
#include "NiagaraScriptExecutionPaddingInfo.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraScriptExecutionPaddingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint16 SrcOffset;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint16 DestOffset;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint16 SrcSize;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint16 DestSize;
    
    NIAGARA_API FNiagaraScriptExecutionPaddingInfo();
};

