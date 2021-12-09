#pragma once
#include "CoreMinimal.h"
#include "StructSerializerNumericTestStruct.generated.h"

USTRUCT(BlueprintType)
struct FStructSerializerNumericTestStruct {
    GENERATED_BODY()
public:
    UPROPERTY()
    int8 Int8;
    
    UPROPERTY()
    int16 Int16;
    
    UPROPERTY()
    int32 Int32;
    
    UPROPERTY()
    int64 Int64;
    
    UPROPERTY()
    uint8 UInt8;
    
    UPROPERTY()
    uint16 UInt16;
    
    UPROPERTY()
    uint32 UInt32;
    
    UPROPERTY()
    uint64 UInt64;
    
    UPROPERTY()
    float Float;
    
    UPROPERTY()
    double Double;
    
    SERIALIZATION_API FStructSerializerNumericTestStruct();
};

