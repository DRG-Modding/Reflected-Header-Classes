#pragma once
#include "CoreMinimal.h"
#include "EFontLayoutMethod.generated.h"

UENUM()
enum class EFontLayoutMethod {
    Metrics,
    BoundingBox,
};

