#pragma once
#include "CoreMinimal.h"
#include "EAILockSource.generated.h"

UENUM()
namespace EAILockSource {
    enum Type {
        Animation,
        Logic,
        Script,
        Gameplay,
        MAX,
    };
}

