#pragma once
#include "CoreMinimal.h"
#include "NiagaraTypeLayoutInfo.h"
#include "NiagaraVariableLayoutInfo.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraVariableLayoutInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint32 FloatComponentStart;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint32 Int32ComponentStart;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint32 HalfComponentStart;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNiagaraTypeLayoutInfo LayoutInfo;
    
    NIAGARA_API FNiagaraVariableLayoutInfo();
};

