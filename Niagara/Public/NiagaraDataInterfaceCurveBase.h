#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceCurveBase.generated.h"

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<float> ShaderLUT;
    
    UPROPERTY()
    float LUTMinTime;
    
    UPROPERTY()
    float LUTMaxTime;
    
    UPROPERTY()
    float LUTInvTimeRange;
    
    UPROPERTY()
    float LUTNumSamplesMinusOne;
    
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bUseLUT: 1;
    
    UNiagaraDataInterfaceCurveBase();
};

