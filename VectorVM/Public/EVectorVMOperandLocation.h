#pragma once
#include "CoreMinimal.h"
#include "EVectorVMOperandLocation.generated.h"

UENUM()
enum class EVectorVMOperandLocation {
    Register,
    Constant,
    Num,
};

