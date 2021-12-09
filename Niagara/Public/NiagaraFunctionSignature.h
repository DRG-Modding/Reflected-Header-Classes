#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariable.h"
#include "NiagaraFunctionSignature.generated.h"

USTRUCT()
struct NIAGARA_API FNiagaraFunctionSignature {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    TArray<FNiagaraVariable> Inputs;
    
    UPROPERTY()
    TArray<FNiagaraVariable> Outputs;
    
    UPROPERTY()
    FName OwnerName;
    
    UPROPERTY()
    uint8 bRequiresContext: 1;
    
    UPROPERTY()
    uint8 bMemberFunction: 1;
    
    UPROPERTY()
    uint8 bExperimental: 1;
    
    UPROPERTY()
    uint8 bSupportsCPU: 1;
    
    UPROPERTY()
    uint8 bSupportsGPU: 1;
    
    UPROPERTY()
    uint8 bWriteFunction: 1;
    
    UPROPERTY()
    TMap<FName, FName> FunctionSpecifiers;
    
    FNiagaraFunctionSignature();
};

