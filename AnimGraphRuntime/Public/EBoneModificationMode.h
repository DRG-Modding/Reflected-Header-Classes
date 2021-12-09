#pragma once
#include "CoreMinimal.h"
#include "EBoneModificationMode.generated.h"

UENUM()
enum EBoneModificationMode {
    BMM_Ignore,
    BMM_Replace,
    BMM_Additive,
    BMM_MAX UMETA(Hidden),
};

