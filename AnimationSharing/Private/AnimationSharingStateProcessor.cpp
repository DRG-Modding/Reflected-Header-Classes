#include "AnimationSharingStateProcessor.h"

class UEnum;
class AActor;

void UAnimationSharingStateProcessor::ProcessActorState_Implementation(int32& OutState, AActor* InActor, uint8 CurrentState, uint8 OnDemandState, bool& bShouldProcess) {
}

UEnum* UAnimationSharingStateProcessor::GetAnimationStateEnum_Implementation() {
    return NULL;
}

UAnimationSharingStateProcessor::UAnimationSharingStateProcessor() {
}

