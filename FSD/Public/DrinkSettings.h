#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "BarleySpawnItem.h"
#include "RandInterval.h"
#include "DrinkSettings.generated.h"

class UDrinkableDataAsset;
class UResourceData;
class UObject;

UCLASS(BlueprintType)
class UDrinkSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FBarleySpawnItem> BarleySpawns;
    
    UPROPERTY(EditAnywhere)
    FRandInterval BarleyAmount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<UResourceData*, int32> SpecialBeerUnlockCost;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UDrinkableDataAsset*> Drinkables;
    
    UFUNCTION(BlueprintPure)
    static TArray<UDrinkableDataAsset*> GetBarDrinkables(UObject* WorldContext, bool IncludeDailySpecial, bool includeNotUnlocked, bool includePlayerRankTooLow);
    
    UFUNCTION(BlueprintPure)
    static UDrinkableDataAsset* GetBarDailySpecial(UObject* WorldContext);
    
    UDrinkSettings();
};

