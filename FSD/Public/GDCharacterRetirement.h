#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RetirementCostItem.h"
#include "GDCharacterRetirement.generated.h"

class UCampaign;
class UPlayerCharacterID;

USTRUCT(BlueprintType)
struct FGDCharacterRetirement {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<UPlayerCharacterID*, TSubclassOf<UCampaign>> Campaigns;
    
    UPROPERTY(EditAnywhere)
    TMap<UPlayerCharacterID*, FRetirementCostItem> RetirementCost;
    
    UPROPERTY(EditAnywhere)
    TArray<float> CreditsCostMultipliers;
    
    UPROPERTY(EditAnywhere)
    TArray<float> ResourceCostMultipliers;
    
    FSD_API FGDCharacterRetirement();
};

