#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "ARTrackedGeometry.h"
#include "ARTrackedImage.generated.h"

class UARCandidateImage;

UCLASS()
class AUGMENTEDREALITY_API UARTrackedImage : public UARTrackedGeometry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UARCandidateImage* DetectedImage;
    
    UPROPERTY()
    FVector2D EstimatedSize;
    
public:
    UFUNCTION(BlueprintPure)
    FVector2D GetEstimateSize();
    
    UFUNCTION(BlueprintPure)
    UARCandidateImage* GetDetectedImage() const;
    
    UARTrackedImage();
};

