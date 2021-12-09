#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceAudioSubmix.h"
#include "NiagaraDataInterfaceAudioSpectrum.generated.h"

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Resolution;
    
    UPROPERTY(EditAnywhere)
    float MinimumFrequency;
    
    UPROPERTY(EditAnywhere)
    float MaximumFrequency;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float NoiseFloorDb;
    
    UNiagaraDataInterfaceAudioSpectrum();
};

