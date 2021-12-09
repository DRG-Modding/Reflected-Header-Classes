#pragma once
#include "CoreMinimal.h"
#include "NiagaraPreviewAxis_InterpParamBase.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector4
#include "NiagaraPreviewAxis_InterpParamVector4.generated.h"

UCLASS(EditInlineNew)
class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FVector4 Min;
    
    UPROPERTY(EditAnywhere)
    FVector4 Max;
    
public:
    UNiagaraPreviewAxis_InterpParamVector4();
};

