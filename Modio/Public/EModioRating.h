#pragma once
#include "CoreMinimal.h"
#include "EModioRating.generated.h"

UENUM()
enum class EModioRating : uint8 {
    Neutral,
    Positive,
    Negative,
};

