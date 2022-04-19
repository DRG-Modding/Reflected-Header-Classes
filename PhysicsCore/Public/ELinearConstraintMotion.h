#pragma once
#include "CoreMinimal.h"
#include "ELinearConstraintMotion.generated.h"

UENUM()
enum ELinearConstraintMotion {
    LCM_Free,
    LCM_Limited,
    LCM_Locked,
    LCM_MAX UMETA(Hidden),
};

