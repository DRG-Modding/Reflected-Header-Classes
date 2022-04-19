#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "FSDSteamUserStats.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UFSDSteamUserStats : public UActorComponent {
    GENERATED_BODY()
public:
    UFSDSteamUserStats();
};

