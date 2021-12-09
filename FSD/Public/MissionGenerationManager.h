#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine GameInstanceSubsystem
#include "GeneratedMissionGroup.h"
#include "MissionGenerationManager.generated.h"

class UGeneratedMission;

UCLASS(BlueprintType)
class UMissionGenerationManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TMap<int32, FGeneratedMissionGroup> AllMissionGroups;
    
    UPROPERTY(EditAnywhere)
    bool ResetSelectedMission;
    
public:
    UFUNCTION(BlueprintPure)
    TArray<UGeneratedMission*> GetMissions(int32 Seed);
    
    UFUNCTION(BlueprintPure)
    UGeneratedMission* GetMissionFromSeeds(int32 GlobalSeed, int32 MissionSeed);
    
    UFUNCTION(BlueprintPure)
    TArray<UGeneratedMission*> GetAvailableMissions();
    
    UMissionGenerationManager();
};

