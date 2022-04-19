#pragma once
#include "CoreMinimal.h"
#include "EPropertyAccessObjectType.generated.h"

UENUM()
enum class EPropertyAccessObjectType : uint8 {
    None,
    Object,
    WeakObject,
    SoftObject,
};

