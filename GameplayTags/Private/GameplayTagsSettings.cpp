#include "GameplayTagsSettings.h"

UGameplayTagsSettings::UGameplayTagsSettings() {
    this->ImportTagsFromConfig = true;
    this->WarnOnInvalidTags = true;
    this->FastReplication = true;
    this->InvalidTagCharacters = TEXT("\"',");
    this->GameplayTagRedirects.AddDefaulted(7);
    this->NumBitsForContainerSize = 6;
    this->NetIndexFirstBitSegment = 16;
}

