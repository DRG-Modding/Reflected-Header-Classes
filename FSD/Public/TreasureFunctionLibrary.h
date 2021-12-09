#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "TreasureFunctionLibrary.generated.h"

class UObject;
class UItemID;
class AProceduralSetup;
class UItemSkin;

UCLASS(BlueprintType)
class UTreasureFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static bool IsBoxInWall(UObject* WorldContextObject, AProceduralSetup* setup, float SizeX, float SizeY, float sizeZ, const FTransform& transorm);
    
    UFUNCTION(BlueprintCallable)
    static bool GiveSimilarSkin(UObject* WorldContextObject, UItemSkin* targetSkin, UItemID* targetItem, UItemSkin*& outGivenSkin, UItemID*& outSkinnedItem);
    
    UFUNCTION(BlueprintCallable)
    static void GiveRandomSkin(UObject* WorldContextObject, UItemSkin*& outGivenSkin, UItemID*& outSkinnedItem);
    
    UTreasureFunctionLibrary();
};

