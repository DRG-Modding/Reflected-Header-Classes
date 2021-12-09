#pragma once
#include "CoreMinimal.h"
#include "NiagaraPlatformSetConflictEntry.h"
#include "NiagaraPlatformSetConflictInfo.generated.h"

USTRUCT()
struct FNiagaraPlatformSetConflictInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 SetAIndex;
    
    UPROPERTY()
    int32 SetBIndex;
    
    UPROPERTY()
    TArray<FNiagaraPlatformSetConflictEntry> Conflicts;
    
    NIAGARA_API FNiagaraPlatformSetConflictInfo();
};

