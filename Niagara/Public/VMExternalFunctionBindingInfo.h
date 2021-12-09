#pragma once
#include "CoreMinimal.h"
#include "VMFunctionSpecifier.h"
#include "VMExternalFunctionBindingInfo.generated.h"

USTRUCT()
struct FVMExternalFunctionBindingInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    FName OwnerName;
    
    UPROPERTY()
    TArray<bool> InputParamLocations;
    
    UPROPERTY()
    int32 NumOutputs;
    
    UPROPERTY()
    TArray<FVMFunctionSpecifier> FunctionSpecifiers;
    
    NIAGARA_API FVMExternalFunctionBindingInfo();
};

