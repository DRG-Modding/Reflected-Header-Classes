#pragma once
#include "CoreMinimal.h"
#include "ChaosEventListenerComponent.h"
#include "ChaosHandlerSet.h"
#include "BreakEventCallbackWrapper.h"
#include "ChaosGameplayEventDispatcher.generated.h"

class UPrimitiveComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class CHAOSSOLVERENGINE_API UChaosGameplayEventDispatcher : public UChaosEventListenerComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<UPrimitiveComponent*, FChaosHandlerSet> CollisionEventRegistrations;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<UPrimitiveComponent*, FBreakEventCallbackWrapper> BreakEventRegistrations;
    
public:
    UChaosGameplayEventDispatcher();
};

