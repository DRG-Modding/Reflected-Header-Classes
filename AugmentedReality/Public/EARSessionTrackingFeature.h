#pragma once
#include "CoreMinimal.h"
#include "EARSessionTrackingFeature.generated.h"

UENUM()
enum class EARSessionTrackingFeature : uint8 {
    None,
    PoseDetection2D,
    PersonSegmentation,
    PersonSegmentationWithDepth,
    SceneDepth,
    SmoothedSceneDepth,
};

