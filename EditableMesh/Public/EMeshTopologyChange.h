#pragma once
#include "CoreMinimal.h"
#include "EMeshTopologyChange.generated.h"

UENUM()
enum class EMeshTopologyChange : uint8 {
    NoTopologyChange,
    TopologyChange,
};

