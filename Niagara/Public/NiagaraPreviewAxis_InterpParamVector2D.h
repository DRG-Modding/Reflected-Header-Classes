#pragma once
#include "CoreMinimal.h"
#include "NiagaraPreviewAxis_InterpParamBase.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "NiagaraPreviewAxis_InterpParamVector2D.generated.h"

UCLASS(EditInlineNew)
class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FVector2D Min;
    
    UPROPERTY(EditAnywhere)
    FVector2D Max;
    
public:
    UNiagaraPreviewAxis_InterpParamVector2D();
};

