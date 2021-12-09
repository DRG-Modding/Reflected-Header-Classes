#pragma once
#include "CoreMinimal.h"
#include "FSDAIController.h"
//CROSS-MODULE INCLUDE: AIModule AIStimulus
#include "HostileGuntowerModuleController.generated.h"

class UAIPerceptionComponent;
class AActor;

UCLASS()
class AHostileGuntowerModuleController : public AFSDAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAIPerceptionComponent* Perception;
    
    UFUNCTION()
    void OnPerceptionUpdated(AActor* sensedActor, FAIStimulus Stimulus);
    
    AHostileGuntowerModuleController();
};

