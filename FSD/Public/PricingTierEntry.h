#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine TableRowBase
#include "IRandRange.h"
#include "PricingTierEntry.generated.h"

USTRUCT(BlueprintType)
struct FPricingTierEntry : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FIRandRange CreditCost;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIRandRange Material1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIRandRange Material2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIRandRange Material3;
    
    FSD_API FPricingTierEntry();
};

