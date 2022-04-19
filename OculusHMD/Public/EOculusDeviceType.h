#pragma once
#include "CoreMinimal.h"
#include "EOculusDeviceType.generated.h"

UENUM()
enum class EOculusDeviceType : uint8 {
    OculusMobile_Deprecated0,
    OculusQuest,
    OculusQuest2,
    Rift = 0x64,
    Rift_S,
    Quest_Link,
    Quest2_Link,
    OculusUnknown = 0xC8,
};

