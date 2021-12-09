#pragma once
#include "CoreMinimal.h"
#include "EMissionStructure.h"
#include "GeneratedMissionSeed.generated.h"

class UBiome;
class UFSDEvent;
class UMissionTemplate;
class UMissionComplexity;
class UMissionDuration;
class UMissionMutator;
class UMissionWarning;

USTRUCT(BlueprintType)
struct FGeneratedMissionSeed {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 Seed;
    
    UPROPERTY(Transient)
    int32 GlobalSeed;
    
    UPROPERTY(Transient)
    UBiome* Biome;
    
    UPROPERTY(Transient)
    UMissionTemplate* Template;
    
    UPROPERTY(Transient)
    UMissionComplexity* ComplexityLimit;
    
    UPROPERTY(Transient)
    UMissionDuration* DurationLimit;
    
    UPROPERTY(Transient)
    UMissionMutator* Mutator;
    
    UPROPERTY(Transient)
    TArray<UMissionWarning*> Warnings;
    
    UPROPERTY(Transient)
    TArray<UFSDEvent*> ActiveEvents;
    
    UPROPERTY(Transient)
    EMissionStructure MissionStructure;
    
    FSD_API FGeneratedMissionSeed();
};

