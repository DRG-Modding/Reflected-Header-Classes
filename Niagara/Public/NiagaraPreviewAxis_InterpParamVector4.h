#pragma once
#include "CoreMinimal.h"
#include "NiagaraPreviewAxis_InterpParamBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
#include "NiagaraPreviewAxis_InterpParamVector4.generated.h"

UCLASS(EditInlineNew)
class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 Max;
    
public:
    UNiagaraPreviewAxis_InterpParamVector4();
};

