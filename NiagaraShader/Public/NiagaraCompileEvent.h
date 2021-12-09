#pragma once
#include "CoreMinimal.h"
#include "FNiagaraCompileEventSeverity.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "NiagaraCompileEvent.generated.h"

USTRUCT()
struct FNiagaraCompileEvent {
    GENERATED_BODY()
public:
    UPROPERTY()
    FNiagaraCompileEventSeverity Severity;
    
    UPROPERTY()
    FString Message;
    
    UPROPERTY()
    FGuid NodeGuid;
    
    UPROPERTY()
    FGuid PinGuid;
    
    UPROPERTY()
    TArray<FGuid> StackGuids;
    
    NIAGARASHADER_API FNiagaraCompileEvent();
};

