#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "CameraRig_Crane.generated.h"

class USceneComponent;

UCLASS()
class CINEMATICCAMERA_API ACameraRig_Crane : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float CranePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float CraneYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float CraneArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool bLockMountPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool bLockMountYaw;
    
private:
    UPROPERTY(EditDefaultsOnly, Export)
    USceneComponent* TransformComponent;
    
    UPROPERTY(EditDefaultsOnly, Export)
    USceneComponent* CraneYawControl;
    
    UPROPERTY(EditDefaultsOnly, Export)
    USceneComponent* CranePitchControl;
    
    UPROPERTY(EditDefaultsOnly, Export)
    USceneComponent* CraneCameraMount;
    
public:
    ACameraRig_Crane();
};

