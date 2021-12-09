#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "CameraTrackingFocusSettings.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FCameraTrackingFocusSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    TSoftObjectPtr<AActor> ActorToTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector RelativeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    uint8 bDrawDebugTrackingFocusPoint: 1;
    
    CINEMATICCAMERA_API FCameraTrackingFocusSettings();
};

