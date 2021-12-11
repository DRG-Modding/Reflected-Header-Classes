#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DeveloperSettings
//CROSS-MODULE INCLUDE: CoreUObject SoftObjectPath
#include "MissionHazardSetting.h"
#include "FSDMissionSettings.generated.h"

class UDifficultySetting;
class UGeneratedMission;
class UObject;

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
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTotalHazardBonus(UObject* WorldContextObject, UGeneratedMission* mission, UDifficultySetting* DifficultySetting);
    
    UFSDMissionSettings();
};

