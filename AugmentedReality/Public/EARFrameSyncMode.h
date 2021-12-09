#pragma once
#include "CoreMinimal.h"
#include "EARFrameSyncMode.generated.h"

UENUM()
enum class EARFrameSyncMode : uint8 {
    SyncTickWithCameraImage,
    SyncTickWithoutCameraImage,
};

