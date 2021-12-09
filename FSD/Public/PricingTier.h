#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "PricingTier.generated.h"

UCLASS(Abstract)
class UPricingTier : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString PriceKey;
    
    UPricingTier();
};

