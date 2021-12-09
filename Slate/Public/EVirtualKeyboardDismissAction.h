#pragma once
#include "CoreMinimal.h"
#include "EVirtualKeyboardDismissAction.generated.h"

UENUM()
enum class EVirtualKeyboardDismissAction : uint8 {
    TextChangeOnDismiss,
    TextCommitOnAccept,
    TextCommitOnDismiss,
};

