#pragma once
#include "CoreMinimal.h"
#include "NiagaraPlatformSet.h"
#include "NiagaraEmitterScalabilitySettings.generated.h"

USTRUCT()
struct FNiagaraEmitterScalabilitySettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FNiagaraPlatformSet Platforms;
    
    UPROPERTY(EditAnywhere)
    uint8 bScaleSpawnCount: 1;
    
    UPROPERTY(EditAnywhere)
    float SpawnCountScale;
    
    NIAGARA_API FNiagaraEmitterScalabilitySettings();
};

