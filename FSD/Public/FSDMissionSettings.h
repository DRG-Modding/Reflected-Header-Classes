#pragma once
#include "CoreMinimal.h"
#include "MissionHazardSetting.h"
//CROSS-MODULE INCLUDE: Engine DeveloperSettings
//CROSS-MODULE INCLUDE: CoreUObject SoftObjectPath
#include "FSDMissionSettings.generated.h"

class UObject;
class UGeneratedMission;
class UDifficultySetting;

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class UFSDMissionSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath DefaultRoomGenerator;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<int32, FMissionHazardSetting> MissionComplexitySettings;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<int32, FMissionHazardSetting> MissionDurationSettings;
    
public:
    UFUNCTION(BlueprintPure)
    static float GetTotalHazardBonus(UObject* WorldContextObject, UGeneratedMission* mission, UDifficultySetting* DifficultySetting);
    
    UFSDMissionSettings();
};

