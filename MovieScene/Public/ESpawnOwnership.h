#pragma once
#include "CoreMinimal.h"
#include "ESpawnOwnership.generated.h"

UENUM()
enum class ESpawnOwnership : uint8 {
    InnerSequence,
    MasterSequence,
    External,
};

