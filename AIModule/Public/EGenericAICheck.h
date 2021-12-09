#pragma once
#include "CoreMinimal.h"
#include "EGenericAICheck.generated.h"

UENUM()
enum class EGenericAICheck {
    Less,
    LessOrEqual,
    Equal,
    NotEqual,
    GreaterOrEqual,
    Greater,
    IsTrue,
    MAX,
};

