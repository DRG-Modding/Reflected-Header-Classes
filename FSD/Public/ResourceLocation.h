#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ResourceLocation.generated.h"

class UResourceData;

USTRUCT(BlueprintType)
struct FResourceLocation {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Location;
    
    UPROPERTY()
    UResourceData* Resource;
    
    UPROPERTY()
    float BaseAmount;
    
    FSD_API FResourceLocation();
};

