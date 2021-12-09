#pragma once
#include "CoreMinimal.h"
#include "CameraFilmbackSettings.h"
#include "NamedFilmbackPreset.generated.h"

USTRUCT(BlueprintType)
struct FNamedFilmbackPreset {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Name;
    
    UPROPERTY()
    FCameraFilmbackSettings FilmbackSettings;
    
    CINEMATICCAMERA_API FNamedFilmbackPreset();
};

