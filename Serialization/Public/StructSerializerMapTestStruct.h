#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "StructSerializerBuiltinTestStruct.h"
#include "StructSerializerMapTestStruct.generated.h"

USTRUCT(BlueprintType)
struct FStructSerializerMapTestStruct {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<int32, FString> IntToStr;
    
    UPROPERTY()
    TMap<FString, FString> StrToStr;
    
    UPROPERTY()
    TMap<FString, FVector> StrToVec;
    
    UPROPERTY()
    TMap<FString, FStructSerializerBuiltinTestStruct> StrToStruct;
    
    SERIALIZATION_API FStructSerializerMapTestStruct();
};

