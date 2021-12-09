#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "CameraRig_Rail.generated.h"

class USceneComponent;
class USplineComponent;

UCLASS()
class CINEMATICCAMERA_API ACameraRig_Rail : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float CurrentPositionOnRail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool bLockOrientationToRail;
    
private:
    UPROPERTY(EditDefaultsOnly, Export)
    USceneComponent* TransformComponent;
    
    UPROPERTY(EditDefaultsOnly, Export)
    USplineComponent* RailSplineComponent;
    
    UPROPERTY(EditDefaultsOnly, Export)
    USceneComponent* RailCameraMount;
    
public:
    UFUNCTION(BlueprintPure)
    USplineComponent* GetRailSplineComponent();
    
    ACameraRig_Rail();
};

