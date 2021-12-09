#pragma once
#include "CoreMinimal.h"
#include "EBindingKind.h"
#include "DynamicPropertyPath.h"
#include "DelegateRuntimeBinding.generated.h"

USTRUCT(BlueprintType)
struct FDelegateRuntimeBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString ObjectName;
    
    UPROPERTY()
    FName PropertyName;
    
    UPROPERTY()
    FName FunctionName;
    
    UPROPERTY()
    FDynamicPropertyPath SourcePath;
    
    UPROPERTY()
    EBindingKind Kind;
    
    UMG_API FDelegateRuntimeBinding();
};

