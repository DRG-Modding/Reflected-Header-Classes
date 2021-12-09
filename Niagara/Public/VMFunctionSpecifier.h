#pragma once
#include "CoreMinimal.h"
#include "VMFunctionSpecifier.generated.h"

USTRUCT(BlueprintType)
struct FVMFunctionSpecifier {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Key;
    
    UPROPERTY()
    FName Value;
    
    NIAGARA_API FVMFunctionSpecifier();
};

