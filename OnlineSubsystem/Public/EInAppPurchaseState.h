#pragma once
#include "CoreMinimal.h"
#include "EInAppPurchaseState.generated.h"

UENUM()
namespace EInAppPurchaseState {
    enum Type {
        Unknown,
        Success,
        Failed,
        Cancelled,
        Invalid,
        NotAllowed,
        Restored,
        AlreadyOwned,
    };
}

