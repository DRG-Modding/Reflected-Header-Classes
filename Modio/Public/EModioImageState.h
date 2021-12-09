#pragma once
#include "CoreMinimal.h"
#include "EModioImageState.generated.h"

UENUM()
enum class EModioImageState : uint8 {
    OnDisc,
    LoadingIntoMemory,
    InMemory,
    Corrupted,
};

