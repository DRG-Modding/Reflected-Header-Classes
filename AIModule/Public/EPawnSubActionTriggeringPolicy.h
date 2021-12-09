#pragma once
#include "CoreMinimal.h"
#include "EPawnSubActionTriggeringPolicy.generated.h"

UENUM()
namespace EPawnSubActionTriggeringPolicy {
    enum Type {
        CopyBeforeTriggering,
        ReuseInstances,
    };
}

