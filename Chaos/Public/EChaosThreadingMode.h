#pragma once
#include "CoreMinimal.h"
#include "EChaosThreadingMode.generated.h"

UENUM()
enum class EChaosThreadingMode {
    DedicatedThread,
    TaskGraph,
    SingleThread,
    Num,
    Invalid,
};

