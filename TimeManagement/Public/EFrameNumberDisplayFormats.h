#pragma once
#include "CoreMinimal.h"
#include "EFrameNumberDisplayFormats.generated.h"

UENUM()
enum class EFrameNumberDisplayFormats {
    NonDropFrameTimecode,
    DropFrameTimecode,
    Seconds,
    Frames,
    MAX_Count,
};

