#pragma once
#include "CoreMinimal.h"
#include "NiagaraPlatformSet.h"
#include "NiagaraSystemScalabilitySettings.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraSystemScalabilitySettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FNiagaraPlatformSet Platforms;
    
    UPROPERTY(EditAnywhere)
    uint8 bCullByDistance: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCullMaxInstanceCount: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCullByMaxTimeWithoutRender: 1;
    
    UPROPERTY(EditAnywhere)
    float MaxDistance;
    
    UPROPERTY(EditAnywhere)
    float MaxInstances;
    
    UPROPERTY(EditAnywhere)
    float MaxTimeWithoutRender;
    
    NIAGARA_API FNiagaraSystemScalabilitySettings();
};

