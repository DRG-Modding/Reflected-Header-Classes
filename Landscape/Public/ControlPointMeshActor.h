#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ControlPointMeshActor.generated.h"

class UControlPointMeshComponent;

UCLASS(NotPlaceable)
class LANDSCAPE_API AControlPointMeshActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UControlPointMeshComponent* ControlPointMeshComponent;
    
public:
    AControlPointMeshActor();
};

