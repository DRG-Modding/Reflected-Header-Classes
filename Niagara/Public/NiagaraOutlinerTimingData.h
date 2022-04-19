#pragma once
#include "CoreMinimal.h"
#include "NiagaraOutlinerTimingData.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraOutlinerTimingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    float GameThread;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    float RenderThread;
    
    NIAGARA_API FNiagaraOutlinerTimingData();
};

