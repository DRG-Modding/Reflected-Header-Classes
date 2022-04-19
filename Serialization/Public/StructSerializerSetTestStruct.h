#pragma once
#include "CoreMinimal.h"
#include "StructSerializerBuiltinTestStruct.h"
#include "StructSerializerSetTestStruct.generated.h"

USTRUCT(BlueprintType)
struct FStructSerializerSetTestStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TSet<FString> StrSet;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TSet<int32> IntSet;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TSet<FName> NameSet;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TSet<FStructSerializerBuiltinTestStruct> StructSet;
    
    SERIALIZATION_API FStructSerializerSetTestStruct();
};

