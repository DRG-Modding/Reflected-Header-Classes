#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "PickaxeSet.h"
#include "EPickaxePartLocation.h"
#include "PickaxeFunctionLibrary.generated.h"

class UPickaxePart;
class UObject;
class UItemID;

UCLASS(BlueprintType)
class UPickaxeFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static bool RemovePickaxePartFromOwned(UObject* WorldContextObject, const UPickaxePart* part);
    
    UFUNCTION(BlueprintPure)
    static bool IsPickaxePartEquipped(UObject* WorldContextObject, EPickaxePartLocation Location, UPickaxePart* part, UItemID* pickaxeID);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UPickaxePart*> GetUnlockedPickaxeParts(UObject* WorldContextObject, EPickaxePartLocation Category);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UPickaxePart*> GetPickaxeParts(UObject* WorldContextObject, EPickaxePartLocation Category);
    
    UFUNCTION(BlueprintPure)
    static bool GetIsPickAxePartAcquired(UObject* WorldContextObject, const UPickaxePart* InPickaxePart);
    
    UFUNCTION(BlueprintPure)
    static FPickaxeSet GetEquippedPickaxeSet(UObject* WorldContextObject, UItemID* pickaxeID);
    
    UFUNCTION(BlueprintPure)
    static UPickaxePart* GetEquippedPickaxePart(UObject* WorldContextObject, EPickaxePartLocation partLocation, UItemID* pickaxeID);
    
    UFUNCTION(BlueprintCallable)
    static void EquipPickaxePart(UObject* WorldContextObject, UPickaxePart* part, EPickaxePartLocation partLocation, UItemID* pickaxeID);
    
    UPickaxeFunctionLibrary();
};

