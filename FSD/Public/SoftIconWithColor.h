#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "SoftIconWithColor.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSoftIconWithColor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor Tint;
    
    FSD_API FSoftIconWithColor();
};

