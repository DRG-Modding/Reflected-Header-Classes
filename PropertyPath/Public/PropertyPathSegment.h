#pragma once
#include "CoreMinimal.h"
#include "PropertyPathSegment.generated.h"

class UStruct;

USTRUCT(BlueprintType)
struct PROPERTYPATH_API FPropertyPathSegment {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    int32 ArrayIndex;
    
private:
    UPROPERTY(Transient)
    UStruct* Struct;
    
public:
    FPropertyPathSegment();
};

