#pragma once
#include "CoreMinimal.h"
#include "MissionTemplateItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "IRandRange.h"
#include "MissionBiomeItem.h"
#include "RequiredMissionItem.h"
#include "GlobalMissionSetup.generated.h"

class UPlanetZone;
class UMissionNameBank;
class UMissionMutator;
class UMissionWarning;

UCLASS(Blueprintable)
class UGlobalMissionSetup : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRandRange ExtraBiomes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRandRange AdditionalMissionsForExtraBiomes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRandRange MissionsPerZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMissionBiomeItem> Biomes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMissionTemplateItem> AvailableMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionTemplateItem FacilityMission;
    
    UPROPERTY(EditAnywhere)
    float FacilityMutatorChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionNameBank* MissionNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRandRange MutatorWarningCount;
    
    UPROPERTY(EditAnywhere)
    float DoubleWarningChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMissionMutator*> Mutators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMissionWarning*> Warnings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UMissionWarning*, UMissionWarning*> IncompatibleWarnings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlanetZone*> PlanetZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRequiredMissionItem> GlobalRequiredMissions;
    
    UGlobalMissionSetup();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMissionTemplateItem> GetAllPossibleMissions() const;
    
};

