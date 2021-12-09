#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
//CROSS-MODULE INCLUDE: CoreUObject Vector4
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject Rotator
//CROSS-MODULE INCLUDE: CoreUObject Quat
//CROSS-MODULE INCLUDE: CoreUObject Color
#include "StructSerializerBuiltinTestStruct.generated.h"

USTRUCT(BlueprintType)
struct FStructSerializerBuiltinTestStruct {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid Guid;
    
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    FString String;
    
    UPROPERTY()
    FText Text;
    
    UPROPERTY()
    FVector Vector;
    
    UPROPERTY()
    FVector4 Vector4;
    
    UPROPERTY()
    FRotator Rotator;
    
    UPROPERTY()
    FQuat Quat;
    
    UPROPERTY()
    FColor Color;
    
    SERIALIZATION_API FStructSerializerBuiltinTestStruct();
};

