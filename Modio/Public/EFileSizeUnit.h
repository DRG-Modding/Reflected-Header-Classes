#pragma once
#include "CoreMinimal.h"
#include "EFileSizeUnit.generated.h"

UENUM(BlueprintType)
enum EFileSizeUnit {
    Largest,
    B,
    KB = 0x400,
    MB = 0x100000,
    GB = 0x40000000,
};

