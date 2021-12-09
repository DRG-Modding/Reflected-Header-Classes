#pragma once
#include "CoreMinimal.h"
#include "CameraLensSettings.h"
#include "NamedLensPreset.generated.h"

USTRUCT(BlueprintType)
struct FNamedLensPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite)
    FCameraLensSettings LensSettings;
    
    CINEMATICCAMERA_API FNamedLensPreset();
};

