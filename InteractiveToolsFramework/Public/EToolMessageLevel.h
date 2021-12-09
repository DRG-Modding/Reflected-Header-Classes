#pragma once
#include "CoreMinimal.h"
#include "EToolMessageLevel.generated.h"

UENUM()
enum class EToolMessageLevel {
    Internal,
    UserMessage,
    UserNotification,
    UserWarning,
    UserError,
};

