#pragma once
#include "CoreMinimal.h"
#include "ELandscapeSetupErrors.generated.h"

UENUM()
enum ELandscapeSetupErrors {
    LSE_None,
    LSE_NoLandscapeInfo,
    LSE_CollsionXY,
    LSE_NoLayerInfo,
    LSE_MAX UMETA(Hidden),
};

