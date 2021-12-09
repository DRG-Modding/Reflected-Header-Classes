#pragma once
#include "CoreMinimal.h"
#include "NiagaraDeviceProfileStateEntry.h"
#include "NiagaraPlatformSet.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraPlatformSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 QualityLevelMask;
    
    UPROPERTY(EditAnywhere)
    TArray<FNiagaraDeviceProfileStateEntry> DeviceProfileStates;
    
    FNiagaraPlatformSet();
};

