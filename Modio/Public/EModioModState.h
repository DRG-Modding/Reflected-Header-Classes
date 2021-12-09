#pragma once
#include "CoreMinimal.h"
#include "EModioModState.generated.h"

UENUM()
enum class EModioModState : uint8 {
    InstallationPending,
    Installed,
    UpdatePending,
    Downloading,
    Extracting,
    UninstallPending,
};

