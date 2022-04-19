#pragma once
#include "CoreMinimal.h"
#include "EPropertyAccessIndirectionType.generated.h"

UENUM()
enum class EPropertyAccessIndirectionType : uint8 {
    Offset,
    Object,
    Array,
    ScriptFunction,
    NativeFunction,
};

