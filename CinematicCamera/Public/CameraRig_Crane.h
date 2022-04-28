#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CameraRig_Crane.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class CINEMATICCAMERA_API ACameraRig_Crane : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Interp)
    float CranePitch;
    
    UPROPERTY(EditAnywhere, Interp)
    float CraneYaw;
    
    UPROPERTY(EditAnywhere, Interp)
    float CraneArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bLockMountPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bLockMountYaw;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* TransformComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* CraneYawControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* CranePitchControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* CraneCameraMount;
    
public:
    ACameraRig_Crane();
};

