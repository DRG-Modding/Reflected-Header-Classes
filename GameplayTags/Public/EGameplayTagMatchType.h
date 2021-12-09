#pragma once
#include "CoreMinimal.h"
#include "EGameplayTagMatchType.generated.h"

UENUM()
namespace EGameplayTagMatchType {
    enum Type {
        Explicit,
        IncludeParentTags,
    };
}

