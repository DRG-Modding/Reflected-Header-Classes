#pragma once
#include "CoreMinimal.h"
#include "EMeshElementAttributeType.generated.h"

UENUM()
enum class EMeshElementAttributeType {
    None,
    FVector4,
    FVector,
    FVector2D,
    Float,
    Int,
    Bool,
    FName,
};

