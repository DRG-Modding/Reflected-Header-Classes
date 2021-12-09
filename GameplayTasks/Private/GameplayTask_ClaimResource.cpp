#include "GameplayTask_ClaimResource.h"
#include "Templates/SubclassOf.h"

class UGameplayTaskOwnerInterface;
class IGameplayTaskOwnerInterface;
class UGameplayTaskResource;
class UGameplayTask_ClaimResource;

UGameplayTask_ClaimResource* UGameplayTask_ClaimResource::ClaimResources(TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner, TArray<TSubclassOf<UGameplayTaskResource>> ResourceClasses, const uint8 Priority, const FName TaskInstanceName) {
    return NULL;
}

UGameplayTask_ClaimResource* UGameplayTask_ClaimResource::ClaimResource(TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner, TSubclassOf<UGameplayTaskResource> ResourceClass, const uint8 Priority, const FName TaskInstanceName) {
    return NULL;
}

UGameplayTask_ClaimResource::UGameplayTask_ClaimResource() {
}

