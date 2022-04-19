#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ARTrackedGeometry.h"
#include "EARPlaneOrientation.h"
#include "ARPlaneGeometry.generated.h"

class UARPlaneGeometry;

UCLASS()
class AUGMENTEDREALITY_API UARPlaneGeometry : public UARTrackedGeometry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EARPlaneOrientation Orientation;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector Center;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector Extent;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FVector> BoundaryPolygon;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UARPlaneGeometry* SubsumedBy;
    
public:
    UARPlaneGeometry();
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
    
};

