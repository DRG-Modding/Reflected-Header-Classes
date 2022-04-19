#pragma once
#include "CoreMinimal.h"
#include "NiagaraPreviewAxis_InterpParamBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "NiagaraPreviewAxis_InterpParamVector2D.generated.h"

UCLASS(EditInlineNew)
class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Max;
    
public:
    UNiagaraPreviewAxis_InterpParamVector2D();
};

