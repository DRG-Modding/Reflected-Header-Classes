#pragma once
#include "CoreMinimal.h"
#include "EWidgetDesignFlags.generated.h"

UENUM()
enum class EWidgetDesignFlags {
    None,
    Designing,
    ShowOutline,
    ExecutePreConstruct = 0x4,
};

