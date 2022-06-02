#pragma once
#include "CoreMinimal.h"
#include "StructSerializerBooleanTestStruct.h"
#include "StructSerializerNumericTestStruct.h"
#include "StructSerializerObjectTestStruct.h"
#include "StructSerializerMapTestStruct.h"
#include "StructSerializerBuiltinTestStruct.h"
#include "StructSerializerArrayTestStruct.h"
#include "StructSerializerSetTestStruct.h"
#include "StructSerializerTestStruct.generated.h"

USTRUCT(BlueprintType)
struct FStructSerializerTestStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStructSerializerNumericTestStruct Numerics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStructSerializerBooleanTestStruct Booleans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStructSerializerObjectTestStruct Objects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStructSerializerBuiltinTestStruct Builtins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStructSerializerArrayTestStruct Arrays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStructSerializerMapTestStruct Maps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStructSerializerSetTestStruct Sets;
    
    SERIALIZATION_API FStructSerializerTestStruct();
};

