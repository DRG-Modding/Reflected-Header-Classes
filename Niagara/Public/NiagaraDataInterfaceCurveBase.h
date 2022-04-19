#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceCurveBase.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<float> ShaderLUT;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float LUTMinTime;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float LUTMaxTime;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float LUTInvTimeRange;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float LUTNumSamplesMinusOne;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseLUT: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bExposeCurve: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ExposedName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTexture2D* ExposedTexture;
    
    UNiagaraDataInterfaceCurveBase();
};

