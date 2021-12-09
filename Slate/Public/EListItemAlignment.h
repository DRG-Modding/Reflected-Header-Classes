#pragma once
#include "CoreMinimal.h"
#include "EListItemAlignment.generated.h"

UENUM()
enum class EListItemAlignment : uint8 {
    EvenlyDistributed,
    EvenlySize,
    EvenlyWide,
    LeftAligned,
    RightAligned,
    CenterAligned,
    Fill,
};

