#pragma once
#include "CoreMinimal.h"
#include "ESlateDebuggingNavigationMethod.generated.h"

UENUM()
enum class ESlateDebuggingNavigationMethod {
    Unknown,
    Explicit,
    CustomDelegateBound,
    CustomDelegateUnbound,
    NextOrPrevious,
    HitTestGrid,
};

