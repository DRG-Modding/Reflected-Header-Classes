#pragma once
#include "CoreMinimal.h"
#include "TrackedCamera.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OculusMR_State.generated.h"

class USceneComponent;

UCLASS(NotPlaceable)
class UOculusMR_State : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTrackedCamera TrackedCamera;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* TrackingReferenceComponent;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    double ScalingFactor;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool ChangeCameraStateRequested;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool BindToTrackedCameraIndexRequested;
    
    UOculusMR_State();
};

