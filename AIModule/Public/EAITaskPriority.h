#pragma once
#include "CoreMinimal.h"
#include "EAITaskPriority.generated.h"

UENUM()
enum class EAITaskPriority {
    Lowest,
    Low = 0x40,
    AutonomousAI = 0x7F,
    High = 0xC0,
    Ultimate = 0xFE,
};

