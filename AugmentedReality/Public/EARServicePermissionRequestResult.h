#pragma once
#include "CoreMinimal.h"
#include "EARServicePermissionRequestResult.generated.h"

UENUM()
enum class EARServicePermissionRequestResult : uint8 {
    Granted,
    Denied,
};

