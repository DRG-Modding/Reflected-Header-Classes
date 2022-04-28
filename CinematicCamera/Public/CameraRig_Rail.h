#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CameraRig_Rail.generated.h"

class USplineComponent;
class USceneComponent;

UCLASS(Blueprintable)
class CINEMATICCAMERA_API ACameraRig_Rail : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Interp)
    float CurrentPositionOnRail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bLockOrientationToRail;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* TransformComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USplineComponent* RailSplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* RailCameraMount;
    
public:
    ACameraRig_Rail();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USplineComponent* GetRailSplineComponent();
    
};

