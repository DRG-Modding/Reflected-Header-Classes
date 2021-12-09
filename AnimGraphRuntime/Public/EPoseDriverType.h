#pragma once
#include "CoreMinimal.h"
#include "EPoseDriverType.generated.h"

UENUM()
enum class EPoseDriverType {
    SwingAndTwist,
    SwingOnly,
    Translation,
};

