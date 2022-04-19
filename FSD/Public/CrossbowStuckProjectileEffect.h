#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "CrossbowStuckProjectileEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UCrossbowStuckProjectileEffect : public UActorComponent {
    GENERATED_BODY()
public:
    UCrossbowStuckProjectileEffect();
};

