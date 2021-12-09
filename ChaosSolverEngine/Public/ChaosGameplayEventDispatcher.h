#pragma once
#include "CoreMinimal.h"
#include "ChaosEventListenerComponent.h"
#include "ChaosHandlerSet.h"
#include "BreakEventCallbackWrapper.h"
#include "ChaosGameplayEventDispatcher.generated.h"

class UPrimitiveComponent;

UCLASS()
class CHAOSSOLVERENGINE_API UChaosGameplayEventDispatcher : public UChaosEventListenerComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<UPrimitiveComponent*, FChaosHandlerSet> CollisionEventRegistrations;
    
    UPROPERTY()
    TMap<UPrimitiveComponent*, FBreakEventCallbackWrapper> BreakEventRegistrations;
    
public:
    UChaosGameplayEventDispatcher();
};

