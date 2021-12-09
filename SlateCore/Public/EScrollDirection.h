#pragma once
#include "CoreMinimal.h"
#include "EScrollDirection.generated.h"

UENUM()
enum EScrollDirection {
    Scroll_Down,
    Scroll_Up,
    Scroll_MAX UMETA(Hidden),
};

