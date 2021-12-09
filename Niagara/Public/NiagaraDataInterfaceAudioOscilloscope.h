#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceAudioOscilloscope.generated.h"

class USoundSubmix;

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USoundSubmix* Submix;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 Resolution;
    
    UPROPERTY(EditAnywhere)
    float ScopeInMilliseconds;
    
    UNiagaraDataInterfaceAudioOscilloscope();
};

