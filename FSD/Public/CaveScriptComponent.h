#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "CaveScriptComponent.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class UCaveScriptComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UCaveScriptComponent();
};

