#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine GameInstanceSubsystem
#include "PresenceSubSystem.generated.h"

class UDiscordWrapper;
class UCommunityGoalWrapper;

UCLASS(BlueprintType)
class UPresenceSubSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UDiscordWrapper* DiscordWI;
    
    UPROPERTY(BlueprintReadOnly)
    UCommunityGoalWrapper* CommunityWI;
    
    UPresenceSubSystem();
};

