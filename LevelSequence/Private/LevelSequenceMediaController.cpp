#include "LevelSequenceMediaController.h"
#include "Net/UnrealNetwork.h"

class ALevelSequenceActor;
class UMediaComponent;

void ALevelSequenceMediaController::SynchronizeToServer(float DesyncThresholdSeconds) {
}

void ALevelSequenceMediaController::Play() {
}

void ALevelSequenceMediaController::OnRep_ServerStartTimeSeconds() {
}

ALevelSequenceActor* ALevelSequenceMediaController::GetSequence() const {
    return NULL;
}

UMediaComponent* ALevelSequenceMediaController::GetMediaComponent() const {
    return NULL;
}

void ALevelSequenceMediaController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALevelSequenceMediaController, ServerStartTimeSeconds);
}

ALevelSequenceMediaController::ALevelSequenceMediaController() {
    this->Sequence = NULL;
    this->ServerStartTimeSeconds = -0.00f;
}

