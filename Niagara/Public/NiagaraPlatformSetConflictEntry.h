#pragma once
#include "CoreMinimal.h"
#include "NiagaraPlatformSetConflictEntry.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraPlatformSetConflictEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName ProfileName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 QualityLevelMask;
    
    NIAGARA_API FNiagaraPlatformSetConflictEntry();
};

