#include "AnimationSharingStateProcessor.h"

class AActor;
class UEnum;

void UAnimationSharingStateProcessor::ProcessActorState_Implementation(int32& OutState, AActor* InActor, uint8 CurrentState, uint8 OnDemandState, bool& bShouldProcess) {
}

UEnum* UAnimationSharingStateProcessor::GetAnimationStateEnum_Implementation() {
    return NULL;
}

UAnimationSharingStateProcessor::UAnimationSharingStateProcessor() {
}

