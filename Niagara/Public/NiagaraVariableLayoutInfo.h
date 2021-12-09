#pragma once
#include "CoreMinimal.h"
#include "NiagaraTypeLayoutInfo.h"
#include "NiagaraVariableLayoutInfo.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraVariableLayoutInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 FloatComponentStart;
    
    UPROPERTY()
    uint32 Int32ComponentStart;
    
    UPROPERTY()
    FNiagaraTypeLayoutInfo LayoutInfo;
    
    NIAGARA_API FNiagaraVariableLayoutInfo();
};

