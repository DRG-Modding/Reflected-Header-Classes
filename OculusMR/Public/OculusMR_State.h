#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "TrackedCamera.h"
#include "OculusMR_State.generated.h"

class USceneComponent;

UCLASS(NotPlaceable)
class UOculusMR_State : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTrackedCamera TrackedCamera;
    
    UPROPERTY(Export)
    USceneComponent* TrackingReferenceComponent;
    
    UPROPERTY()
    double ScalingFactor;
    
    UPROPERTY()
    bool ChangeCameraStateRequested;
    
    UPROPERTY()
    bool BindToTrackedCameraIndexRequested;
    
    UOculusMR_State();
};

