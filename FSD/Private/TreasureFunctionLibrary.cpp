#include "TreasureFunctionLibrary.h"

class UObject;
class UItemID;
class AProceduralSetup;
class UItemSkin;

bool UTreasureFunctionLibrary::IsBoxInWall(UObject* WorldContextObject, AProceduralSetup* setup, float SizeX, float SizeY, float sizeZ, const FTransform& transorm) {
    return false;
}

bool UTreasureFunctionLibrary::GiveSimilarSkin(UObject* WorldContextObject, UItemSkin* targetSkin, UItemID* targetItem, UItemSkin*& outGivenSkin, UItemID*& outSkinnedItem) {
    return false;
}

void UTreasureFunctionLibrary::GiveRandomSkin(UObject* WorldContextObject, UItemSkin*& outGivenSkin, UItemID*& outSkinnedItem) {
}

UTreasureFunctionLibrary::UTreasureFunctionLibrary() {
}

