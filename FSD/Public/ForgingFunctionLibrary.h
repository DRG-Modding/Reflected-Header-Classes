#pragma once
#include "CoreMinimal.h"
#include "ESchematicType.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "ForgingFunctionLibrary.generated.h"

class USchematic;
class UObject;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_ThreeParams(FForgingFunctionLibraryIsLargerThan, const USchematic*, Schematic1, const USchematic*, Schematic2, bool&, FirstIsLarger);

UCLASS(BlueprintType)
class UForgingFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static USchematic* GiveForginMasteryReward(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GiveForgingXP(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static TArray<USchematic*> GetOwnedSchematicsSorted(UObject* WorldContextObject, bool SmallestFirst, const FForgingFunctionLibraryIsLargerThan& IsLargerThan);
    
    UFUNCTION(BlueprintPure)
    static TArray<USchematic*> GetOwnedSchematics(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static ESchematicType GetNextForgingMasterRewardType(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static int32 GetForgingXP(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static float GetForgingLevelProgress(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static int32 GetForgingLevel(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static TArray<USchematic*> GetForgedSchematics(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static TArray<USchematic*> GetAllSchematicsSorted(UObject* WorldContextObject, bool SmallestFirst, const FForgingFunctionLibraryIsLargerThan& IsLargerThan);
    
    UFUNCTION(BlueprintPure)
    static TArray<USchematic*> GetAllSchematics(UObject* WorldContextObject);
    
    UForgingFunctionLibrary();
};

