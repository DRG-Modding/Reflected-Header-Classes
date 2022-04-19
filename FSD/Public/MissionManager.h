#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "MissionManager.generated.h"

class URunningMissionBP;

UCLASS(meta=(BlueprintSpawnableComponent))
class UMissionManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<URunningMissionBP*> RunningBlueprints;
    
public:
    UMissionManager();
protected:
    UFUNCTION(BlueprintCallable)
    void OnMatchStarted();
    
};

