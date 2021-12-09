#pragma once
#include "CoreMinimal.h"
#include "EModioAuthenticationProvider.generated.h"

UENUM()
enum class EModioAuthenticationProvider : uint8 {
    XboxLive,
    Steam,
    GoG,
    Itch,
    Switch,
    Discord,
};

