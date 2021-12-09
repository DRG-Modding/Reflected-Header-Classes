#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "CableActor.generated.h"

class UCableComponent;

UCLASS()
class CABLECOMPONENT_API ACableActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCableComponent* CableComponent;
    
    ACableActor();
};

