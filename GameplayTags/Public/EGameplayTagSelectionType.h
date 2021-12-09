#pragma once
#include "CoreMinimal.h"
#include "EGameplayTagSelectionType.generated.h"

UENUM()
enum class EGameplayTagSelectionType {
    None,
    NonRestrictedOnly,
    RestrictedOnly,
    All,
};

