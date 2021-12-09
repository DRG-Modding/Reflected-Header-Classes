#pragma once
#include "CoreMinimal.h"
#include "StructSerializerByteArray.generated.h"

USTRUCT()
struct FStructSerializerByteArray {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Dummy1;
    
    UPROPERTY()
    TArray<uint8> ByteArray;
    
    UPROPERTY()
    int32 Dummy2;
    
    UPROPERTY()
    TArray<int8> Int8Array;
    
    UPROPERTY()
    int32 Dummy3;
    
    SERIALIZATION_API FStructSerializerByteArray();
};

