#pragma once
#include "CoreMinimal.h"
#include "EFocusCause.generated.h"

UENUM()
enum class EFocusCause {
    Mouse,
    Navigation,
    SetDirectly,
    Cleared,
    OtherWidgetLostFocus,
    WindowActivate,
};

