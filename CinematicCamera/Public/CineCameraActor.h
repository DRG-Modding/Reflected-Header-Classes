#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine CameraActor
#include "CameraLookatTrackingSettings.h"
#include "CineCameraActor.generated.h"

class UCineCameraComponent;

UCLASS()
class CINEMATICCAMERA_API ACineCameraActor : public ACameraActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraLookatTrackingSettings LookatTrackingSettings;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCineCameraComponent* GetCineCameraComponent() const;
    
    ACineCameraActor();
};

