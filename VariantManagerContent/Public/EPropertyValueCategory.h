#pragma once
#include "CoreMinimal.h"
#include "EPropertyValueCategory.generated.h"

UENUM(BlueprintType)
enum class EPropertyValueCategory : uint8 {
    Undefined,
    Generic,
    RelativeLocation,
    RelativeRotation = 0x4,
    RelativeScale3D = 0x8,
    Visibility = 0x10,
    Material = 0x20,
    Color = 0x40,
    Option = 0x80,
};

