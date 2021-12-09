#pragma once
#include "CoreMinimal.h"
#include "EInAppPurchaseStatus.generated.h"

UENUM()
enum class EInAppPurchaseStatus : uint8 {
    Invalid,
    Failed,
    Deferred,
    Canceled,
    Purchased,
    Restored,
};

