#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "GMMutatorItem.h"
#include "EMissionStructure.h"
#include "ObjectiveMissionIcon.h"
#include "GeneratedMission.generated.h"

class UMissionComplexity;
class UObjective;
class UBiome;
class UMissionTemplate;
class UMutator;
class UMissionWarning;
class UMissionMutator;
class UMissionDuration;
class UMissionDNA;
class ULevelSequence;
class AProceduralSetup;
class AFSDPlayerController;
class UGeneratedMission;

UCLASS(Blueprintable)
class UGeneratedMission : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    UBiome* Biome;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 Seed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 GlobalSeed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UMissionTemplate* Template;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FText MissionName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TSubclassOf<UObjective> PrimaryObjective;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TSubclassOf<UObjective> SecondaryObjective;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TMap<TSubclassOf<UMutator>, FGMMutatorItem> Mutators;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<UMissionWarning*> MissionWarnings;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UMissionMutator* MissionMutator;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UMissionComplexity* ComplexityLimit;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UMissionDuration* DurationLimit;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TSubclassOf<UMissionDNA> MissionDNA;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EMissionStructure MissionStructure;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<ULevelSequence> LoaderLevelSequence;
    
    UFUNCTION(BlueprintImplementableEvent)
    void Recieve_SetupPLS(AProceduralSetup* pls);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsSingleMission() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLocked(AFSDPlayerController* Player) const;
    
    UFUNCTION(BlueprintPure)
    bool IsDeepDive() const;
    
    UFUNCTION(BlueprintPure)
    FObjectiveMissionIcon GetSecondaryObjectiveIcon() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<AProceduralSetup> GetPLS() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UMutator*> GetMutators(TSubclassOf<UMutator> mutatorClass) const;
    
    UFUNCTION(BlueprintPure)
    float GetMissionScale() const;
    
    UFUNCTION(BlueprintPure)
    UMissionDNA* GetMissionDNA() const;
    
    UFUNCTION(BlueprintCallable)
    AProceduralSetup* CreatePLS(int32 NewSeed);
    
    UFUNCTION(BlueprintPure)
    bool AreMissionsEqual(UGeneratedMission* Other) const;
    
    UGeneratedMission();
};

