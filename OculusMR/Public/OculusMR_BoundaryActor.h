#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "OculusMR_BoundaryActor.generated.h"

class UOculusMR_BoundaryMeshComponent;

UCLASS(NotPlaceable)
class AOculusMR_BoundaryActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UOculusMR_BoundaryMeshComponent* BoundaryMeshComponent;
    
    AOculusMR_BoundaryActor();
};

