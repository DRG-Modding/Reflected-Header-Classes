#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "MOD_MakeEliteEnemy.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UMOD_MakeEliteEnemy : public UActorComponent {
    GENERATED_BODY()
public:
    UMOD_MakeEliteEnemy();
};

