#pragma once
#include "CoreMinimal.h"
#include "NiagaraPreviewAxis.h"
#include "NiagaraPreviewAxis_InterpParamBase.generated.h"

UCLASS(Abstract, EditInlineNew)
class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName Param;
    
    UPROPERTY(EditAnywhere)
    int32 count;
    
public:
    UNiagaraPreviewAxis_InterpParamBase();
};

