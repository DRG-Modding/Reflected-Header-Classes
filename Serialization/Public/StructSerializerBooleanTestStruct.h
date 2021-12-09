#pragma once
#include "CoreMinimal.h"
#include "StructSerializerBooleanTestStruct.generated.h"

USTRUCT(BlueprintType)
struct FStructSerializerBooleanTestStruct {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool BoolFalse;
    
    UPROPERTY()
    bool BoolTrue;
    
    UPROPERTY()
    uint8 Bitfield0: 1;
    
    UPROPERTY()
    uint8 Bitfield1: 1;
    
    UPROPERTY()
    uint8 Bitfield2Set: 1;
    
    UPROPERTY()
    uint8 Bitfield3: 1;
    
    UPROPERTY()
    uint8 Bitfield4Set: 1;
    
    UPROPERTY()
    uint8 Bitfield5Set: 1;
    
    UPROPERTY()
    uint8 Bitfield6: 1;
    
    UPROPERTY()
    uint8 Bitfield7Set: 1;
    
    SERIALIZATION_API FStructSerializerBooleanTestStruct();
};

