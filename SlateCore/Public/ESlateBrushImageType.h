#pragma once
#include "CoreMinimal.h"
#include "ESlateBrushImageType.generated.h"

UENUM()
namespace ESlateBrushImageType {
    enum Type {
        NoImage,
        FullColor,
        Linear,
    };
}

