#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "StructSerializerBuiltinTestStruct.h"
#include "StructSerializerArrayTestStruct.generated.h"

USTRUCT(BlueprintType)
struct FStructSerializerArrayTestStruct {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<int32> Int32Array;
    
    UPROPERTY()
    TArray<uint8> ByteArray;
    
    UPROPERTY()
    int32 StaticSingleElement;
    
    UPROPERTY()
    int32 StaticInt32Array[3];
    
    UPROPERTY()
    float StaticFloatArray[3];
    
    UPROPERTY()
    TArray<FVector> VectorArray;
    
    UPROPERTY()
    TArray<FStructSerializerBuiltinTestStruct> StructArray;
    
    SERIALIZATION_API FStructSerializerArrayTestStruct();
};

