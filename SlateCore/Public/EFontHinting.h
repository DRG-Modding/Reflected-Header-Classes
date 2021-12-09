#pragma once
#include "CoreMinimal.h"
#include "EFontHinting.generated.h"

UENUM()
enum class EFontHinting : uint8 {
    Default,
    Auto,
    AutoLight,
    Monochrome,
    None,
};

