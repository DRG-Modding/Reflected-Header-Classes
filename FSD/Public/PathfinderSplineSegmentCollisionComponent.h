#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: FSDEngine PFCollisionType
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "PathfinderSplineSegmentCollisionComponent.generated.h"

class USplineComponent;

UCLASS(BlueprintType)
class UPathfinderSplineSegmentCollisionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    PFCollisionType CollisionType;
    
    UFUNCTION(BlueprintCallable)
    void UpdateFromSpline(USplineComponent* SplineComponent, int32 StartIndex);
    
    UFUNCTION(BlueprintCallable)
    void Update(const FVector& SplineStart, const FVector& SplineStartTangent, const FVector& SplineEnd, const FVector& SplineEndTangent);
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
    UPathfinderSplineSegmentCollisionComponent();
};

