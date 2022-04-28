#pragma once
#include "CoreMinimal.h"
#include "NiagaraOutlinerTimingData.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraOutlinerTimingData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float GameThread;
    
    UPROPERTY(EditAnywhere)
    float RenderThread;
    
    NIAGARA_API FNiagaraOutlinerTimingData();
};

