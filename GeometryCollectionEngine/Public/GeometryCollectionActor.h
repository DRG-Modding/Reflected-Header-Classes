#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "GeometryCollectionActor.generated.h"

class UGeometryCollectionDebugDrawComponent;
class UGeometryCollectionComponent;

UCLASS(Blueprintable)
class GEOMETRYCOLLECTIONENGINE_API AGeometryCollectionActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGeometryCollectionComponent* GeometryCollectionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent;
    
    AGeometryCollectionActor();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool RaycastSingle(FVector Start, FVector End, FHitResult& OutHit) const;
    
};

