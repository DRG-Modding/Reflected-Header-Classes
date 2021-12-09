#pragma once
#include "CoreMinimal.h"
#include "SimulationStageMetaData.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FSimulationStageMetaData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName IterationSource;
    
    UPROPERTY()
    uint8 bSpawnOnly: 1;
    
    UPROPERTY()
    uint8 bWritesParticles: 1;
    
    UPROPERTY()
    TArray<FName> OutputDestinations;
    
    UPROPERTY()
    int32 MinStage;
    
    UPROPERTY()
    int32 MaxStage;
    
    FSimulationStageMetaData();
};

