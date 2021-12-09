#pragma once
#include "CoreMinimal.h"
#include "FoliageVertexColorMask.generated.h"

UENUM()
enum FoliageVertexColorMask {
    FOLIAGEVERTEXCOLORMASK_Disabled,
    FOLIAGEVERTEXCOLORMASK_Red,
    FOLIAGEVERTEXCOLORMASK_Green,
    FOLIAGEVERTEXCOLORMASK_Blue,
    FOLIAGEVERTEXCOLORMASK_Alpha,
    FOLIAGEVERTEXCOLORMASK_MAX UMETA(Hidden),
};

