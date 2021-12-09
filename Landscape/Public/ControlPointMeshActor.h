#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "ControlPointMeshActor.generated.h"

class UControlPointMeshComponent;

UCLASS(NotPlaceable)
class LANDSCAPE_API AControlPointMeshActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UControlPointMeshComponent* ControlPointMeshComponent;
    
public:
    AControlPointMeshActor();
};

