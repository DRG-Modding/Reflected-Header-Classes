#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TrackedCamera.h"
#include "OculusMR_State.generated.h"

class USceneComponent;

UCLASS(Blueprintable, NotPlaceable)
class UOculusMR_State : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrackedCamera TrackedCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* TrackingReferenceComponent;
    
    UPROPERTY(EditAnywhere)
    double ScalingFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ChangeCameraStateRequested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BindToTrackedCameraIndexRequested;
    
    UOculusMR_State();
};

