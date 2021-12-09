#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SavableDataAsset.h"
#include "ResourceSpawner.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
//CROSS-MODULE INCLUDE: CoreUObject RandomStream
#include "ObjectiveMissionIcon.h"
#include "MissionTemplate.generated.h"

class UMutator;
class UObjective;
class UWorld;
class UMissionComplexity;
class AProceduralSetup;
class AFSDGameMode;
class UMissionDuration;
class UBiome;
class UFSDSaveGame;
class UTexture2D;
class UMissionDNA;
class UDebrisActorComponent;
class UTutorialComponent;
class UGeneratedMission;
class UMissionTemplate;
class UObject;
class UMissionMutator;
class UMissionWarning;

UCLASS(Blueprintable, EditInlineNew)
class UMissionTemplate : public USavableDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FResourceSpawner> ResourceDistribution;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UObjective> PrimaryObjective;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<UObjective>> SecondaryObjectives;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UObjective>> DeepDiveObjectives;
    
    UPROPERTY(EditAnywhere)
    TArray<UMutator*> BaseMutators;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AProceduralSetup> pls;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UWorld> Level;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AFSDGameMode> GameMode;
    
    UPROPERTY(EditAnywhere)
    TArray<UMissionComplexity*> LockedComplexities;
    
    UPROPERTY(EditAnywhere)
    TArray<UMissionDuration*> LockedDurations;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText MissionName;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> MissionImageLarge;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> MissionButtonImage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* MissionIcon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* MissionIconSmall;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor MissionColor;
    
    UPROPERTY(EditAnywhere)
    int32 MissionTypeIndex;
    
    UPROPERTY(EditAnywhere)
    FString MissionTypeAnalyticsIndex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<UMissionDNA>> DNA;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<UDebrisActorComponent>> DebrisComponents;
    
    UPROPERTY(EditAnywhere)
    bool MustBeUnlocked;
    
    UPROPERTY(EditAnywhere)
    float RoomEncounerScale;
    
    UPROPERTY(EditAnywhere)
    float StationaryEnemyScale;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<UTutorialComponent>> Tutorials;
    
    UFUNCTION(BlueprintImplementableEvent)
    void Receive_SetMissionParameters(UGeneratedMission* mission, FRandomStream& Random);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsLocked(UFSDSaveGame* SaveGame) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UMissionDuration*> GetValidDurations() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UMissionComplexity*> GetValidComplexities() const;
    
    UFUNCTION(BlueprintPure)
    TSoftClassPtr<AProceduralSetup> GetSoftReferenceToPLS();
    
    UFUNCTION(BlueprintPure)
    static FObjectiveMissionIcon GetPrimaryObjectiveIconFromAsset(UMissionTemplate* mission, bool getSmallVersion);
    
    UFUNCTION(BlueprintPure)
    FObjectiveMissionIcon GetPrimaryObjectiveIcon(bool getSmallVersion) const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<AProceduralSetup> GetPLS() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMissionTypeIndex() const;
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetMissionImageLarge() const;
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetMissionButtonImage() const;
    
    UFUNCTION(BlueprintCallable)
    UGeneratedMission* GenerateMission(const UObject* WorldContextObject, UBiome* Biome, int32 Seed, int32 GlobalSeed, int32 missionIndex, UMissionComplexity* limitComplexity, UMissionDuration* limitDuration, UMissionMutator* Mutator, TArray<UMissionWarning*> Warnings, TSubclassOf<UObjective> forceSecondary);
    
    UMissionTemplate();
};

