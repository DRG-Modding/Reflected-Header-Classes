#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine HitResult
#include "GeometryCollectionActor.generated.h"

class UGeometryCollectionComponent;
class UGeometryCollectionDebugDrawComponent;

UCLASS()
class GEOMETRYCOLLECTIONENGINE_API AGeometryCollectionActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UGeometryCollectionComponent* GeometryCollectionComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent;
    
    UFUNCTION(BlueprintPure)
    bool RaycastSingle(FVector Start, FVector End, FHitResult& OutHit) const;
    
    AGeometryCollectionActor();
};

