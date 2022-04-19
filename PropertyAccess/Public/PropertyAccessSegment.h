#pragma once
#include "CoreMinimal.h"
#include "PropertyAccessSegment.generated.h"

class UStruct;
class UFunction;

USTRUCT(BlueprintType)
struct FPropertyAccessSegment {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UStruct* Struct;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TFieldPath<FProperty> Property;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UFunction* Function;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 ArrayIndex;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint16 Flags;
    
public:
    PROPERTYACCESS_API FPropertyAccessSegment();
};

