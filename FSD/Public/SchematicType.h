#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "SchematicType.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSchematicType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor IconTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Frame;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor FrameTint;
    
    FSD_API FSchematicType();
};

