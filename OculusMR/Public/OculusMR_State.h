#pragma once
#include "CoreMinimal.h"
#include "TrackedCamera.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
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

