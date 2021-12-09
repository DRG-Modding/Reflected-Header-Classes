#pragma once
#include "CoreMinimal.h"
#include "EUdpMessageFormat.generated.h"

UENUM()
enum class EUdpMessageFormat : uint8 {
    None,
    Json,
    TaggedProperty,
    CborPlatformEndianness,
    CborStandardEndianness,
};

