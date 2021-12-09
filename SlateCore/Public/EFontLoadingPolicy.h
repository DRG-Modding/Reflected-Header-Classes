#pragma once
#include "CoreMinimal.h"
#include "EFontLoadingPolicy.generated.h"

UENUM()
enum class EFontLoadingPolicy : uint8 {
    LazyLoad,
    Stream,
    Inline,
};

