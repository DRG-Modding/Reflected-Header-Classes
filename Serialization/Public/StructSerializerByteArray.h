#pragma once
#include "CoreMinimal.h"
#include "StructSerializerByteArray.generated.h"

USTRUCT(BlueprintType)
struct FStructSerializerByteArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Dummy1;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> ByteArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Dummy2;
    
    UPROPERTY(EditAnywhere)
    TArray<int8> Int8Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Dummy3;
    
    SERIALIZATION_API FStructSerializerByteArray();
};

