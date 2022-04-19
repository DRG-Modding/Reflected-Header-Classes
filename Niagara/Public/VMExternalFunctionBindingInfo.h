#pragma once
#include "CoreMinimal.h"
#include "VMFunctionSpecifier.h"
#include "VMExternalFunctionBindingInfo.generated.h"

USTRUCT()
struct FVMExternalFunctionBindingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName OwnerName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<bool> InputParamLocations;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 NumOutputs;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FVMFunctionSpecifier> FunctionSpecifiers;
    
    NIAGARA_API FVMExternalFunctionBindingInfo();
};

