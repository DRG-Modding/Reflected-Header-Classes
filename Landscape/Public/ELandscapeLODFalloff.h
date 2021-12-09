#pragma once
#include "CoreMinimal.h"
#include "ELandscapeLODFalloff.generated.h"

UENUM()
namespace ELandscapeLODFalloff {
    enum Type {
        Linear,
        SquareRoot,
    };
}

