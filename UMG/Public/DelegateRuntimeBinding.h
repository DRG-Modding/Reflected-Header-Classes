#pragma once
#include "CoreMinimal.h"
#include "EBindingKind.h"
#include "DynamicPropertyPath.h"
#include "DelegateRuntimeBinding.generated.h"

USTRUCT(BlueprintType)
struct FDelegateRuntimeBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString ObjectName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName PropertyName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName FunctionName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDynamicPropertyPath SourcePath;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EBindingKind Kind;
    
    UMG_API FDelegateRuntimeBinding();
};

