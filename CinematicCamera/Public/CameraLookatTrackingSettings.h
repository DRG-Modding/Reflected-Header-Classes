#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "CameraLookatTrackingSettings.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FCameraLookatTrackingSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    uint8 bEnableLookAtTracking: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    uint8 bDrawDebugLookAtTrackingPosition: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LookAtTrackingInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    TSoftObjectPtr<AActor> ActorToTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FVector RelativeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    uint8 bAllowRoll: 1;
    
    CINEMATICCAMERA_API FCameraLookatTrackingSettings();
};

