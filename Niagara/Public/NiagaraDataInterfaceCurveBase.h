#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceCurveBase.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<float> ShaderLUT;
    
    UPROPERTY(EditAnywhere)
    float LUTMinTime;
    
    UPROPERTY(EditAnywhere)
    float LUTMaxTime;
    
    UPROPERTY(EditAnywhere)
    float LUTInvTimeRange;
    
    UPROPERTY(EditAnywhere)
    float LUTNumSamplesMinusOne;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseLUT: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bExposeCurve: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ExposedName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ExposedTexture;
    
    UNiagaraDataInterfaceCurveBase();
};

