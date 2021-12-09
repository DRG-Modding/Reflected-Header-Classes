#pragma once
#include "CoreMinimal.h"
#include "EModioLogLevel.generated.h"

UENUM()
enum class EModioLogLevel : uint8 {
    Trace,
    Info,
    Warning,
    Error,
};

