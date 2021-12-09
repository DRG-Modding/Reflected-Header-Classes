#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "IRandRange.h"
#include "MissionBiomeItem.h"
#include "RequiredMissionItem.h"
#include "MissionTemplateItem.h"
#include "GlobalMissionSetup.generated.h"

class UPlanetZone;
class UMissionWarning;
class UMissionNameBank;
class UMissionMutator;

UCLASS(BlueprintType)
class UGlobalMissionSetup : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FIRandRange ExtraBiomes;
    
    UPROPERTY(EditAnywhere)
    FIRandRange AdditionalMissionsForExtraBiomes;
    
    UPROPERTY(EditAnywhere)
    FIRandRange MissionsPerZone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FMissionBiomeItem> Biomes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FMissionTemplateItem> AvailableMissions;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMissionTemplateItem FacilityMission;
    
    UPROPERTY(EditAnywhere)
    float FacilityMutatorChance;
    
    UPROPERTY(EditAnywhere)
    UMissionNameBank* MissionNames;
    
    UPROPERTY(EditAnywhere)
    FIRandRange MutatorWarningCount;
    
    UPROPERTY(EditAnywhere)
    float DoubleWarningChance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UMissionMutator*> Mutators;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UMissionWarning*> Warnings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<UMissionWarning*, UMissionWarning*> IncompatibleWarnings;
    
    UPROPERTY(EditAnywhere)
    TArray<UPlanetZone*> PlanetZones;
    
    UPROPERTY(EditAnywhere)
    TArray<FRequiredMissionItem> GlobalRequiredMissions;
    
    UFUNCTION(BlueprintPure)
    TArray<FMissionTemplateItem> GetAllPossibleMissions() const;
    
    UGlobalMissionSetup();
};

