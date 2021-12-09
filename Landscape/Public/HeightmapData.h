#pragma once
#include "CoreMinimal.h"
#include "HeightmapData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FHeightmapData {
    GENERATED_BODY()
public:
    UPROPERTY()
    UTexture2D* Texture;
    
    LANDSCAPE_API FHeightmapData();
};

