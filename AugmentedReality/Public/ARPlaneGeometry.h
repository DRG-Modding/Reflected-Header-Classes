#pragma once
#include "CoreMinimal.h"
#include "ARTrackedGeometry.h"
#include "EARPlaneOrientation.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ARPlaneGeometry.generated.h"

class UARPlaneGeometry;

UCLASS()
class AUGMENTEDREALITY_API UARPlaneGeometry : public UARTrackedGeometry {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    EARPlaneOrientation Orientation;
    
    UPROPERTY()
    FVector Center;
    
    UPROPERTY()
    FVector Extent;
    
    UPROPERTY()
    UARPlaneGeometry* SubsumedBy;
    
public:
    UFUNCTION(BlueprintPure)
    UARPlaneGeometry* GetSubsumedBy() const;
    
    UFUNCTION(BlueprintPure)
    EARPlaneOrientation GetOrientation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetExtent() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetCenter() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FVector> GetBoundaryPolygonInLocalSpace() const;
    
    UARPlaneGeometry();
};

