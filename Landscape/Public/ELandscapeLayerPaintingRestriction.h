#pragma once
#include "CoreMinimal.h"
#include "ELandscapeLayerPaintingRestriction.generated.h"

UENUM()
enum class ELandscapeLayerPaintingRestriction {
    None,
    UseMaxLayers,
    ExistingOnly,
    UseComponentWhitelist,
};

