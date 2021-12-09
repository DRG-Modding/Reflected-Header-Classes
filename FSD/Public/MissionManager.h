#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "MissionManager.generated.h"

class URunningMissionBP;

UCLASS()
class UMissionManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<URunningMissionBP*> RunningBlueprints;
    
    UFUNCTION()
    void OnMatchStarted();
    
public:
    UMissionManager();
};

