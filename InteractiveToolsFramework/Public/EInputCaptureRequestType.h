#pragma once
#include "CoreMinimal.h"
#include "EInputCaptureRequestType.generated.h"

UENUM()
enum class EInputCaptureRequestType {
    Begin = 0x1,
    Ignore,
};

