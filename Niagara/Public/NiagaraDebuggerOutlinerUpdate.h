#pragma once
#include "CoreMinimal.h"
#include "NiagaraOutlinerData.h"
#include "NiagaraDebuggerOutlinerUpdate.generated.h"

USTRUCT()
struct NIAGARA_API FNiagaraDebuggerOutlinerUpdate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraOutlinerData OutlinerData;
    
    FNiagaraDebuggerOutlinerUpdate();
};

