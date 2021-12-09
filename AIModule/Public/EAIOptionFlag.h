#pragma once
#include "CoreMinimal.h"
#include "EAIOptionFlag.generated.h"

UENUM()
namespace EAIOptionFlag {
    enum Type {
        Default,
        Enable,
        Disable,
        MAX,
    };
}

