#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "NiagaraPreviewAxis_InterpParamBase.h"
#include "NiagaraPreviewAxis_InterpParamLinearColor.generated.h"

UCLASS(EditInlineNew)
class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FLinearColor Min;
    
    UPROPERTY(EditAnywhere)
    FLinearColor Max;
    
public:
    UNiagaraPreviewAxis_InterpParamLinearColor();
};

