#pragma once
#include "CoreMinimal.h"
#include "StructSerializerBuiltinTestStruct.h"
#include "StructSerializerSetTestStruct.generated.h"

USTRUCT(BlueprintType)
struct FStructSerializerSetTestStruct {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSet<FString> StrSet;
    
    UPROPERTY()
    TSet<int32> IntSet;
    
    UPROPERTY()
    TSet<FName> NameSet;
    
    UPROPERTY()
    TSet<FStructSerializerBuiltinTestStruct> StructSet;
    
    SERIALIZATION_API FStructSerializerSetTestStruct();
};

