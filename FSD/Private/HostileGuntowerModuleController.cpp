#include "HostileGuntowerModuleController.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIPerceptionComponent -FallbackName=AIPerceptionComponent

class AActor;

void AHostileGuntowerModuleController::OnPerceptionUpdated(AActor* sensedActor, FAIStimulus Stimulus) {
}

AHostileGuntowerModuleController::AHostileGuntowerModuleController() {
    this->Perception = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception"));
}

