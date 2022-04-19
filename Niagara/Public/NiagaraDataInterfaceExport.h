#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraUserParameterBinding.h"
#include "ENDIExport_GPUAllocationMode.h"
#include "NiagaraDataInterfaceExport.generated.h"

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceExport : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraUserParameterBinding CallbackHandlerParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENDIExport_GPUAllocationMode GPUAllocationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GPUAllocationFixedSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GPUAllocationPerParticleSize;
    
    UNiagaraDataInterfaceExport();
};

