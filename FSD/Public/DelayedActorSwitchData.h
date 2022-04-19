#pragma once
#include "CoreMinimal.h"
#include "DelayedActorSwitchData.generated.h"

class AActor;

USTRUCT()
struct FDelayedActorSwitchData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    uint8 IsActive: 1;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    uint8 IsExternalActor: 1;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    uint8 IsUnEquipCalled: 1;
    
    FSD_API FDelayedActorSwitchData();
};

