#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "LandscapeMeshProxyActor.generated.h"

class ULandscapeMeshProxyComponent;

UCLASS(MinimalAPI)
class ALandscapeMeshProxyActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent;
    
public:
    ALandscapeMeshProxyActor();
};

