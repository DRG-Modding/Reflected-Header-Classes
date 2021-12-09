#pragma once
#include "CoreMinimal.h"
#include "EFFTWindowType.generated.h"

UENUM()
enum class EFFTWindowType : uint8 {
    None,
    Hamming,
    Hann,
    Blackman,
};

