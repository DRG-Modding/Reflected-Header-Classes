#include "ModioModCollectionLibrary.h"

FString UModioModCollectionLibrary::GetPath(const FModioModCollectionEntry& Entry) {
    return TEXT("");
}

EModioModState UModioModCollectionLibrary::GetModState(const FModioModCollectionEntry& Entry) {
    return EModioModState::InstallationPending;
}

FModioModInfo UModioModCollectionLibrary::GetModProfile(const FModioModCollectionEntry& Entry) {
    return FModioModInfo{};
}

FModioModID UModioModCollectionLibrary::GetID(const FModioModCollectionEntry& Entry) {
    return FModioModID{};
}

UModioModCollectionLibrary::UModioModCollectionLibrary() {
}

