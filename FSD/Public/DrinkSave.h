#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "DrinkSave.generated.h"

USTRUCT(BlueprintType)
struct FDrinkSave {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSet<FGuid> UnlockedDrinks;
    
    UPROPERTY()
    bool HasUnlockedSpecial;
    
    FSD_API FDrinkSave();
};

