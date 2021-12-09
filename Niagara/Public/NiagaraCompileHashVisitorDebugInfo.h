#pragma once
#include "CoreMinimal.h"
#include "NiagaraCompileHashVisitorDebugInfo.generated.h"

USTRUCT()
struct NIAGARA_API FNiagaraCompileHashVisitorDebugInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Object;
    
    UPROPERTY()
    TArray<FString> PropertyKeys;
    
    UPROPERTY()
    TArray<FString> PropertyValues;
    
    FNiagaraCompileHashVisitorDebugInfo();
};

