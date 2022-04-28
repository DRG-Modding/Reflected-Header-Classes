#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceCurveBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "NiagaraDataInterfaceVectorCurve.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRichCurve XCurve;
    
    UPROPERTY(EditAnywhere)
    FRichCurve YCurve;
    
    UPROPERTY(EditAnywhere)
    FRichCurve ZCurve;
    
    UNiagaraDataInterfaceVectorCurve();
};

