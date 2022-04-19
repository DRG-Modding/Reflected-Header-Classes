#pragma once
#include "CoreMinimal.h"
#include "NiagaraPlatformSetConflictEntry.h"
#include "NiagaraPlatformSetConflictInfo.generated.h"

USTRUCT()
struct FNiagaraPlatformSetConflictInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 SetAIndex;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 SetBIndex;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraPlatformSetConflictEntry> Conflicts;
    
    NIAGARA_API FNiagaraPlatformSetConflictInfo();
};

