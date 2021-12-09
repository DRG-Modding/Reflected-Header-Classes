#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "MissionTypeDescription.h"
#include "BiomeFeatures.h"
#include "DamageTypeDescription.h"
#include "MissionStepDescription.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "EDamageType.h"
#include "MinersManual.generated.h"

class ULoreScreenMasterWidget;
class UEnemyMinersManualData;
class UBiome;
class UMinersManualData;
class UMissionTemplate;
class UObject;

UCLASS(BlueprintType)
class UMinersManual : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftClassPtr<ULoreScreenMasterWidget>> BasicsPages;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<int32, FText> BasicsPageHeaders;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftClassPtr<ULoreScreenMasterWidget>> CombatPages;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftClassPtr<ULoreScreenMasterWidget>> ExtraMissionPages;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftClassPtr<ULoreScreenMasterWidget>> ResourcePages;
    
protected:
    UPROPERTY(EditAnywhere)
    TArray<UEnemyMinersManualData*> Enemies;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UBiome>> BiomeReferences;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UMissionTemplate>> MissionReferences;
    
    UPROPERTY(EditAnywhere)
    TArray<FDamageTypeDescription> DamageTypeInfo;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, FMissionTypeDescription> MissionDescriptions;
    
    UPROPERTY(EditAnywhere)
    TMap<int32, FBiomeFeatures> BiomeFeatureDescriptions;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsObjectInMinersManual(UObject* WorldContext, UObject* Object);
    
    UFUNCTION(BlueprintPure)
    bool IsMissionUnlocked(UObject* WorldContext, UMissionTemplate* mission);
    
    UFUNCTION(BlueprintPure)
    bool IsBiomeUnlocked(UObject* WorldContext, UBiome* Biome);
    
    UFUNCTION(BlueprintPure)
    TArray<FText> GetUnlockedCreatureLore(UObject* WorldContext, UEnemyMinersManualData* enemy, float& completePercentage);
    
    UFUNCTION(BlueprintPure)
    TArray<TSoftObjectPtr<UMissionTemplate>> GetMissions() const;
    
    UFUNCTION(BlueprintPure)
    void GetMissionInfo(int32 MissionTypeIndex, FText& InfoHeadline, FText& InfoDescription, TArray<FMissionStepDescription>& Steps);
    
    UFUNCTION(BlueprintPure)
    int32 GetEnemyKillCount(UObject* WorldContext, FGuid EnemyID);
    
    UFUNCTION(BlueprintPure)
    TArray<UEnemyMinersManualData*> GetEnemiesSorted();
    
    UFUNCTION(BlueprintPure)
    TArray<UEnemyMinersManualData*> GetEnemies();
    
    UFUNCTION(BlueprintPure)
    void GetDamageTypeDescriptions(TArray<EDamageType> damageTypes, TArray<FDamageTypeDescription>& Icon);
    
    UFUNCTION(BlueprintPure)
    void GetDamageTypeDescription(EDamageType damageTypes, FDamageTypeDescription& Icon);
    
    UFUNCTION(BlueprintPure)
    TArray<TSoftObjectPtr<UBiome>> GetBiomes() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UMinersManualData*> GetBiomeFeatures(int32 BiomeIndex);
    
    UFUNCTION(BlueprintPure)
    TArray<FDamageTypeDescription> GetAllDamageTypeDescriptions();
    
    UMinersManual();
};

