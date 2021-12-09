#pragma once
#include "CoreMinimal.h"
#include "NiagaraSystemScalabilitySettings.h"
#include "NiagaraSystemScalabilityOverride.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraSystemScalabilityOverride : public FNiagaraSystemScalabilitySettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bOverrideDistanceSettings: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideInstanceCountSettings: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideTimeSinceRendererSettings: 1;
    
    NIAGARA_API FNiagaraSystemScalabilityOverride();
};

