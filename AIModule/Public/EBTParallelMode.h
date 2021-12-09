#pragma once
#include "CoreMinimal.h"
#include "EBTParallelMode.generated.h"

UENUM()
namespace EBTParallelMode {
    enum Type {
        AbortBackground,
        WaitForBackground,
    };
}

