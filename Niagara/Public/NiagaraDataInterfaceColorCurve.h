#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceCurveBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "NiagaraDataInterfaceColorCurve.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRichCurve RedCurve;
    
    UPROPERTY(EditAnywhere)
    FRichCurve GreenCurve;
    
    UPROPERTY(EditAnywhere)
    FRichCurve BlueCurve;
    
    UPROPERTY(EditAnywhere)
    FRichCurve AlphaCurve;
    
    UNiagaraDataInterfaceColorCurve();
};

