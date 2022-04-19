#pragma once
#include "CoreMinimal.h"
#include "EPropertyAccessObjectType.h"
#include "EPropertyAccessIndirectionType.h"
#include "PropertyAccessIndirection.generated.h"

class UFunction;

USTRUCT(BlueprintType)
struct FPropertyAccessIndirection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TFieldPath<FArrayProperty> ArrayProperty;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UFunction* Function;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 ReturnBufferSize;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 ReturnBufferAlignment;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 ArrayIndex;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint32 Offset;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EPropertyAccessObjectType ObjectType;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EPropertyAccessIndirectionType Type;
    
public:
    PROPERTYACCESS_API FPropertyAccessIndirection();
};

