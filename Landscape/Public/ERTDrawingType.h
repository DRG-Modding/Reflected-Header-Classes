#pragma once
#include "CoreMinimal.h"
#include "ERTDrawingType.generated.h"

UENUM()
enum class ERTDrawingType {
    RTAtlas,
    RTAtlasToNonAtlas,
    RTNonAtlasToAtlas,
    RTNonAtlas,
    RTMips,
};

