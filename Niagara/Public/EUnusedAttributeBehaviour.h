#pragma once
#include "CoreMinimal.h"
#include "EUnusedAttributeBehaviour.generated.h"

UENUM()
enum class EUnusedAttributeBehaviour {
    Copy,
    Zero,
    None,
    MarkInvalid,
    PassThrough,
};

