#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=FSDEngine -ObjectName=PFCollisionType -FallbackName=PFCollisionType
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PathfinderSplineSegmentCollisionComponent.generated.h"

class USplineComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPathfinderSplineSegmentCollisionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
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

