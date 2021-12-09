#pragma once
#include "CoreMinimal.h"
#include "EUserInterfaceActionType.generated.h"

UENUM()
enum class EUserInterfaceActionType {
    None,
    Button,
    ToggleButton,
    RadioButton,
    Check,
    CollapsedButton,
};

