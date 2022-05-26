#pragma once
#include "CoreMinimal.h"
#include "EToolMessageLevel.generated.h"

UENUM(BlueprintType)
enum class EToolMessageLevel : uint8 {
    Internal,
    UserMessage,
    UserNotification,
    UserWarning,
    UserError,
};

