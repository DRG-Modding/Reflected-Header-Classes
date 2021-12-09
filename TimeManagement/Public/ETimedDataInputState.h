#pragma once
#include "CoreMinimal.h"
#include "ETimedDataInputState.generated.h"

UENUM()
enum class ETimedDataInputState {
    Connected,
    Unresponsive,
    Disconnected,
};

