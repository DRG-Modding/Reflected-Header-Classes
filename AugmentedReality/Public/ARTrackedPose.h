#pragma once
#include "CoreMinimal.h"
#include "ARTrackedGeometry.h"
#include "ARPose3D.h"
#include "ARTrackedPose.generated.h"

UCLASS()
class AUGMENTEDREALITY_API UARTrackedPose : public UARTrackedGeometry {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    FARPose3D GetTrackedPoseData() const;
    
    UARTrackedPose();
};

