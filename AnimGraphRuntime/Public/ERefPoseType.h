#pragma once
#include "CoreMinimal.h"
#include "ERefPoseType.generated.h"

UENUM()
enum ERefPoseType {
    EIT_LocalSpace,
    EIT_Additive,
    EIT_MAX UMETA(Hidden),
};

