#pragma once
#include "CoreMinimal.h"
#include "StructSerializerNumericTestStruct.generated.h"

USTRUCT(BlueprintType)
struct FStructSerializerNumericTestStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int8 Int8;
    
    UPROPERTY(EditAnywhere)
    int16 Int16;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Int32;
    
    UPROPERTY(EditAnywhere)
    int64 Int64;
    
    UPROPERTY(EditAnywhere)
    uint8 UInt8;
    
    UPROPERTY(EditAnywhere)
    uint16 UInt16;
    
    UPROPERTY(EditAnywhere)
    uint32 UInt32;
    
    UPROPERTY(EditAnywhere)
    uint64 UInt64;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Float;
    
    UPROPERTY(EditAnywhere)
    double Double;
    
    SERIALIZATION_API FStructSerializerNumericTestStruct();
};

