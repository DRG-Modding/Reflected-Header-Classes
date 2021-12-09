#pragma once
#include "CoreMinimal.h"
#include "NiagaraPreviewAxis_InterpParamBase.h"
#include "NiagaraPreviewAxis_InterpParamInt32.generated.h"

UCLASS(EditInlineNew)
class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    int32 Min;
    
    UPROPERTY(EditAnywhere)
    int32 Max;
    
public:
    UNiagaraPreviewAxis_InterpParamInt32();
};

