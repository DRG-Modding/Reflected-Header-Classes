#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "HealthBarLooks.generated.h"

USTRUCT(BlueprintType)
struct FHealthBarLooks {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor HealthColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor DamageColor;
    
    FSD_API FHealthBarLooks();
};

