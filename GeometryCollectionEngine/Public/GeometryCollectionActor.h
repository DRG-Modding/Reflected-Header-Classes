#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GeometryCollectionActor.generated.h"

class UGeometryCollectionComponent;
class UGeometryCollectionDebugDrawComponent;

UCLASS()
class GEOMETRYCOLLECTIONENGINE_API AGeometryCollectionActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UGeometryCollectionComponent* GeometryCollectionComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent;
    
    AGeometryCollectionActor();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool RaycastSingle(FVector Start, FVector End, FHitResult& OutHit) const;
    
};

