#pragma once
#include "CoreMinimal.h"
#include "EAppleTextureType.generated.h"

UENUM()
enum class EAppleTextureType {
    Unknown,
    Image,
    PixelBuffer,
    Surface,
    MetalTexture,
};

