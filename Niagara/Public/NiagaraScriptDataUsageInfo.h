#pragma once
#include "CoreMinimal.h"
#include "NiagaraScriptDataUsageInfo.generated.h"

USTRUCT()
struct FNiagaraScriptDataUsageInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bReadsAttributeData;
    
    NIAGARA_API FNiagaraScriptDataUsageInfo();
};

