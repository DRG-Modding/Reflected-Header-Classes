#pragma once
#include "CoreMinimal.h"
#include "FSDAIController.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIStimulus -FallbackName=AIStimulus
#include "HostileGuntowerModuleController.generated.h"

class UAIPerceptionComponent;
class AActor;

UCLASS(Blueprintable)
class AHostileGuntowerModuleController : public AFSDAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAIPerceptionComponent* Perception;
    
    AHostileGuntowerModuleController();
    UFUNCTION(BlueprintCallable)
    void OnPerceptionUpdated(AActor* sensedActor, FAIStimulus Stimulus);
    
};

