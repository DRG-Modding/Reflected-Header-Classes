#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "PresenceSubSystem.generated.h"

class UDiscordWrapper;
class UCommunityGoalWrapper;

UCLASS(Blueprintable)
class UPresenceSubSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDiscordWrapper* DiscordWI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommunityGoalWrapper* CommunityWI;
    
    UPresenceSubSystem();
};

