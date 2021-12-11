#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ARTrackedGeometry.h"
#include "EARPlaneOrientation.h"
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
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UARPlaneGeometry* GetSubsumedBy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EARPlaneOrientation GetOrientation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetExtent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCenter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVector> GetBoundaryPolygonInLocalSpace() const;
    
    UARPlaneGeometry();
};

