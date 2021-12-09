#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "SpecialEventBlueprintLibrary.generated.h"

class USchematic;
class UObject;

UCLASS(BlueprintType)
class USpecialEventBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static USchematic* TryGivePendingReward(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void StorePendingReward(UObject* WorldContextObject, const TArray<USchematic*>& schematicsToChooseFrom);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void SpawnEventRewardFrame(UObject* WorldContextObject, FVector Location);
    
    UFUNCTION(BlueprintPure)
    static bool HasPendingReward(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static TArray<USchematic*> GetSpecialEventsRewardSchematics(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ClearPendingReward(UObject* WorldContextObject);
    
    USpecialEventBlueprintLibrary();
};

