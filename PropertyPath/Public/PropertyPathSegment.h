#pragma once
#include "CoreMinimal.h"
#include "PropertyPathSegment.generated.h"

class UStruct;

USTRUCT(BlueprintType)
struct PROPERTYPATH_API FPropertyPathSegment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArrayIndex;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStruct* Struct;
    
public:
    FPropertyPathSegment();
};

