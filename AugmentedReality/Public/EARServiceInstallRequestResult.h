#pragma once
#include "CoreMinimal.h"
#include "EARServiceInstallRequestResult.generated.h"

UENUM()
enum class EARServiceInstallRequestResult : uint8 {
    Installed,
    DeviceNotCompatible,
    UserDeclinedInstallation,
    FatalError,
};

