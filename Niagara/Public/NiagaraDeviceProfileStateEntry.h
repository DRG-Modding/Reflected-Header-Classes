#pragma once
#include "CoreMinimal.h"
#include "NiagaraDeviceProfileStateEntry.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraDeviceProfileStateEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ProfileName;
    
    UPROPERTY(EditAnywhere)
    uint32 QualityLevelMask;
    
    UPROPERTY(EditAnywhere)
    uint32 SetQualityLevelMask;
    
    NIAGARA_API FNiagaraDeviceProfileStateEntry();
};

