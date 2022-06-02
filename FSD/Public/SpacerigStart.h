#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerStart -FallbackName=PlayerStart
#include "ESpacerigStartType.h"
#include "PlayerSpawnInHubDelegate.h"
#include "SpacerigStart.generated.h"

class AFSDPlayerController;

UCLASS(Blueprintable)
class ASpacerigStart : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSpawnInHub OnPlayerSpawn;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSpawnInHub OnPlayerLeave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFSDPlayerController* usedBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpacerigStartType StartType;
    
    ASpacerigStart();
};

