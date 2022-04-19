#pragma once
#include "CoreMinimal.h"
#include "EPlaneComponentDebugMode.generated.h"

UENUM()
enum class EPlaneComponentDebugMode : uint8 {
    None,
    ShowNetworkRole,
    ShowClassification,
};

