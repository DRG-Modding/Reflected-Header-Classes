#pragma once
#include "CoreMinimal.h"
#include "EAIRequestPriority.generated.h"

UENUM()
namespace EAIRequestPriority {
    enum Type {
        SoftScript,
        Logic,
        HardScript,
        Reaction,
        Ultimate,
        MAX,
    };
}

