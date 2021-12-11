#pragma once
#include "CoreMinimal.h"
#include "ARTrackedGeometry.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
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
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetEstimateSize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UARCandidateImage* GetDetectedImage() const;
    
    UARTrackedImage();
};

