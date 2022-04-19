#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BehaviorTreeComponent -FallbackName=BehaviorTreeComponent
#include "FSDBehaviorTreeComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UFSDBehaviorTreeComponent : public UBehaviorTreeComponent {
    GENERATED_BODY()
public:
    UFSDBehaviorTreeComponent();
};

