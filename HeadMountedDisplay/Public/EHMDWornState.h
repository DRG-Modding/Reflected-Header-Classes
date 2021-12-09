#pragma once
#include "CoreMinimal.h"
#include "EHMDWornState.generated.h"

UENUM()
namespace EHMDWornState {
    enum Type {
        Unknown,
        Worn,
        NotWorn,
    };
}

