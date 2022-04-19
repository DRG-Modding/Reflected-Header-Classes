#pragma once
#include "CoreMinimal.h"
#include "NiagaraOutlinerSystemInstanceData.h"
#include "NiagaraOutlinerTimingData.h"
#include "NiagaraOutlinerSystemData.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraOutlinerSystemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraOutlinerSystemInstanceData> SystemInstances;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraOutlinerTimingData AveragePerFrameTime;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraOutlinerTimingData MaxPerFrameTime;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraOutlinerTimingData AveragePerInstanceTime;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraOutlinerTimingData MaxPerInstanceTime;
    
    NIAGARA_API FNiagaraOutlinerSystemData();
};

