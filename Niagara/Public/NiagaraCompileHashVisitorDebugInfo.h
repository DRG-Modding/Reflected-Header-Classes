#pragma once
#include "CoreMinimal.h"
#include "NiagaraCompileHashVisitorDebugInfo.generated.h"

USTRUCT()
struct NIAGARA_API FNiagaraCompileHashVisitorDebugInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString Object;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FString> PropertyKeys;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FString> PropertyValues;
    
    FNiagaraCompileHashVisitorDebugInfo();
};

