#pragma once
#include "CoreMinimal.h"
#include "EColorSpace.generated.h"

UENUM()
enum class EColorSpace : uint8 {
    Unknown,
    Unmanaged,
    Rec_2020,
    Rec_709,
    Rift_CV1,
    Rift_S,
    Quest,
    P3,
    Adobe_RGB,
};

