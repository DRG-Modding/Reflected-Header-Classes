#pragma once
#include "CoreMinimal.h"
#include "EARPlaneOrientation.generated.h"

UENUM()
enum class EARPlaneOrientation : uint8 {
    Horizontal,
    Vertical,
    Diagonal,
};

