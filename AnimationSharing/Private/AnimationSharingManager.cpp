#include "AnimationSharingManager.h"

class AActor;
class USkeleton;
class UObject;
class UAnimationSharingManager;
class UAnimationSharingSetup;

void UAnimationSharingManager::RegisterActorWithSkeletonBP(AActor* InActor, const USkeleton* SharingSkeleton) {
}

UAnimationSharingManager* UAnimationSharingManager::GetAnimationSharingManager(UObject* WorldContextObject) {
    return NULL;
}

bool UAnimationSharingManager::CreateAnimationSharingManager(UObject* WorldContextObject, const UAnimationSharingSetup* setup) {
    return false;
}

bool UAnimationSharingManager::AnimationSharingEnabled() {
    return false;
}

UAnimationSharingManager::UAnimationSharingManager() {
}

