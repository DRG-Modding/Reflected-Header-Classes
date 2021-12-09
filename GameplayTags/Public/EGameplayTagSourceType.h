#pragma once
#include "CoreMinimal.h"
#include "EGameplayTagSourceType.generated.h"

UENUM()
enum class EGameplayTagSourceType : uint8 {
    Native,
    DefaultTagList,
    TagList,
    RestrictedTagList,
    DataTable,
    Invalid,
};

