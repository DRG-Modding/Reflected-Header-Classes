#pragma once
#include "CoreMinimal.h"
#include "EClothingWindMethod_Legacy.generated.h"

UENUM()
enum class EClothingWindMethod_Legacy : uint8 {
    Legacy,
    Accurate,
    EClothingWindMethod_MAX UMETA(Hidden),
};

