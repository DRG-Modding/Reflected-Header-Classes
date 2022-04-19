#pragma once
#include "CoreMinimal.h"
#include "EOodleEnableMode.generated.h"

UENUM()
enum class EOodleEnableMode {
    AlwaysEnabled,
    WhenCompressedPacketReceived,
};

