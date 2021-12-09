#pragma once
#include "CoreMinimal.h"
#include "EGeometryCollectionCacheType.generated.h"

UENUM()
enum class EGeometryCollectionCacheType : uint8 {
    None,
    Record,
    Play,
    RecordAndPlay,
};

