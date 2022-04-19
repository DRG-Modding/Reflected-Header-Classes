#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CameraRig_Rail.generated.h"

class USceneComponent;
class USplineComponent;

UCLASS()
class CINEMATICCAMERA_API ACameraRig_Rail : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CurrentPositionOnRail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bLockOrientationToRail;
    
private:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* TransformComponent;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export, meta=(AllowPrivateAccess=true))
    USplineComponent* RailSplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* RailCameraMount;
    
public:
    ACameraRig_Rail();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USplineComponent* GetRailSplineComponent();
    
};

