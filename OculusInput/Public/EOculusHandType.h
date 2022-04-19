#pragma once
#include "CoreMinimal.h"
#include "EOculusHandType.generated.h"

UENUM(BlueprintType)
enum class EOculusHandType : uint8 {
    None,
    HandLeft,
    HandRight,
};

