#pragma once
#include "CoreMinimal.h"
#include "StructSerializerByteArray.generated.h"

USTRUCT()
struct FStructSerializerByteArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 Dummy1;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<uint8> ByteArray;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 Dummy2;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<int8> Int8Array;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 Dummy3;
    
    SERIALIZATION_API FStructSerializerByteArray();
};

