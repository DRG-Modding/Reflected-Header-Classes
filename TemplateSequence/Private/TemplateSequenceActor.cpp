#include "TemplateSequenceActor.h"
#include "Net/UnrealNetwork.h"

class UTemplateSequence;
class AActor;
class UTemplateSequencePlayer;

void ATemplateSequenceActor::SetSequence(UTemplateSequence* InSequence) {
}

void ATemplateSequenceActor::SetBinding(AActor* Actor) {
}

UTemplateSequence* ATemplateSequenceActor::LoadSequence() const {
    return NULL;
}

UTemplateSequencePlayer* ATemplateSequenceActor::GetSequencePlayer() const {
    return NULL;
}

UTemplateSequence* ATemplateSequenceActor::GetSequence() const {
    return NULL;
}

void ATemplateSequenceActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATemplateSequenceActor, SequencePlayer);
}

ATemplateSequenceActor::ATemplateSequenceActor() {
}

