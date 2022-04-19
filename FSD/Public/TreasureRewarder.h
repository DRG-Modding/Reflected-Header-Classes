#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "TreasureRewarder.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UTreasureRewarder : public UActorComponent {
    GENERATED_BODY()
public:
    UTreasureRewarder();
};

