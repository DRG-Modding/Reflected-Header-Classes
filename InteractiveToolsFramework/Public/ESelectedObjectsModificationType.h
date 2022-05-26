#pragma once
#include "CoreMinimal.h"
#include "ESelectedObjectsModificationType.generated.h"

UENUM(BlueprintType)
enum class ESelectedObjectsModificationType : uint8 {
    Replace,
    Add,
    Remove,
    Clear,
};

