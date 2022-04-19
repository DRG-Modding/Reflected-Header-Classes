#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=FSDEngine -ObjectName=PFCollisionType -FallbackName=PFCollisionType
#include "PathfinderSplineSegmentCollisionComponent.generated.h"

class USplineComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UPathfinderSplineSegmentCollisionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    PFCollisionType CollisionType;
    
    UPathfinderSplineSegmentCollisionComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateFromSpline(USplineComponent* SplineComponent, int32 StartIndex);
    
    UFUNCTION(BlueprintCallable)
    void Update(const FVector& SplineStart, const FVector& SplineStartTangent, const FVector& SplineEnd, const FVector& SplineEndTangent);
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
};

