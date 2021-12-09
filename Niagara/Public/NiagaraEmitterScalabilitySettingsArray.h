#pragma once
#include "CoreMinimal.h"
#include "NiagaraEmitterScalabilitySettings.h"
#include "NiagaraEmitterScalabilitySettingsArray.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraEmitterScalabilitySettingsArray {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FNiagaraEmitterScalabilitySettings> Settings;
    
    NIAGARA_API FNiagaraEmitterScalabilitySettingsArray();
};

