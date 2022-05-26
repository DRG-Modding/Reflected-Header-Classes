#pragma once
#include "CoreMinimal.h"
#include "NiagaraPlatformSetCVarCondition.h"
#include "NiagaraDeviceProfileStateEntry.h"
#include "NiagaraPlatformSet.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraPlatformSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QualityLevelMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraDeviceProfileStateEntry> DeviceProfileStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraPlatformSetCVarCondition> CVarConditions;
    
    FNiagaraPlatformSet();
};

