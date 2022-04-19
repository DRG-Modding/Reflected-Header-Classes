#pragma once
#include "CoreMinimal.h"
#include "EARTextureType.generated.h"

UENUM(BlueprintType)
enum class EARTextureType : uint8 {
    Unknown,
    CameraImage,
    CameraDepth,
    EnvironmentCapture,
    PersonSegmentationImage,
    PersonSegmentationDepth,
    SceneDepthMap,
    SceneDepthConfidenceMap,
};

