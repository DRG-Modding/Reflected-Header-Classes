#pragma once
#include "CoreMinimal.h"
#include "ESelectedObjectsModificationType.generated.h"

UENUM()
enum class ESelectedObjectsModificationType {
    Replace,
    Add,
    Remove,
    Clear,
};

