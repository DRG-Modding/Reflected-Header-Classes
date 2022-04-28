#pragma once
#include "CoreMinimal.h"
#include "StructSerializerSetTestStruct.h"
#include "StructSerializerNumericTestStruct.h"
#include "StructSerializerBooleanTestStruct.h"
#include "StructSerializerObjectTestStruct.h"
#include "StructSerializerBuiltinTestStruct.h"
#include "StructSerializerArrayTestStruct.h"
#include "StructSerializerMapTestStruct.h"
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

