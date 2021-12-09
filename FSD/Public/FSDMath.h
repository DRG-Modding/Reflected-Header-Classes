#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "FSDMath.generated.h"

UCLASS(BlueprintType)
class UFSDMath : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static FVector SphericalToCartesian(float Radius, float azimuth, float elecation);
    
    UFUNCTION(BlueprintPure)
    static bool PercentageCheck(float percentage);
    
    UFUNCTION(BlueprintPure)
    static void GetAzimuthAndElevation(const FVector& Direction, const FTransform& coordinateSystem, float& azimuth, float& elevation);
    
    UFUNCTION(BlueprintCallable)
    static float CubicSegmentLength(FVector p0, FVector tangent1, FVector p1, FVector tangent2);
    
    UFUNCTION(BlueprintCallable)
    static FVector CubicInterpBlueprint(FVector p0, FVector tangent1, FVector p1, FVector tangent2, float alpha);
    
    UFUNCTION(BlueprintPure)
    static void CartesianToSpherical(FVector Location, float& outAzimuth, float& outElevation, float& outRadius);
    
    UFSDMath();
};
