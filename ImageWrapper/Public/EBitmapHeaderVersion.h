#pragma once
#include "CoreMinimal.h"
#include "EBitmapHeaderVersion.generated.h"

UENUM()
enum class EBitmapHeaderVersion {
    BHV_BITMAPINFOHEADER,
    BHV_BITMAPV2INFOHEADER,
    BHV_BITMAPV3INFOHEADER,
    BHV_BITMAPV4HEADER,
    BHV_BITMAPV5HEADER,
    BHV_MAX UMETA(Hidden),
};

