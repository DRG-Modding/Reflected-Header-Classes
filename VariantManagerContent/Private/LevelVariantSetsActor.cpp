#include "LevelVariantSetsActor.h"

class ULevelVariantSets;

bool ALevelVariantSetsActor::SwitchOnVariantByName(const FString& VariantSetName, const FString& VariantName) {
    return false;
}

bool ALevelVariantSetsActor::SwitchOnVariantByIndex(int32 VariantSetIndex, int32 VariantIndex) {
    return false;
}

void ALevelVariantSetsActor::SetLevelVariantSets(ULevelVariantSets* InVariantSets) {
}

ULevelVariantSets* ALevelVariantSetsActor::GetLevelVariantSets(bool bLoad) {
    return NULL;
}

ALevelVariantSetsActor::ALevelVariantSetsActor() {
}

