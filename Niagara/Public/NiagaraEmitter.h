#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Box
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "EParticleAllocationMode.h"
#include "NiagaraEmitterScriptProperties.h"
#include "NiagaraEmitterScalabilityOverrides.h"
#include "NiagaraDetailsLevelScaleOverrides.h"
#include "ENiagaraSimTarget.h"
#include "NiagaraPlatformSet.h"
#include "NiagaraEventScriptProperties.h"
#include "NiagaraEmitter.generated.h"

class UNiagaraRendererProperties;
class UNiagaraSimulationStageBase;
class UNiagaraScript;

UCLASS(MinimalAPI)
class UNiagaraEmitter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bLocalSpace;
    
    UPROPERTY(EditAnywhere)
    bool bDeterminism;
    
    UPROPERTY(EditAnywhere)
    int32 RandomSeed;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    EParticleAllocationMode AllocationMode;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 PreAllocationCount;
    
    UPROPERTY()
    FNiagaraEmitterScriptProperties UpdateScriptProps;
    
    UPROPERTY()
    FNiagaraEmitterScriptProperties SpawnScriptProps;
    
    UPROPERTY()
    FNiagaraEmitterScriptProperties EmitterSpawnScriptProps;
    
    UPROPERTY()
    FNiagaraEmitterScriptProperties EmitterUpdateScriptProps;
    
    UPROPERTY(EditAnywhere)
    ENiagaraSimTarget SimTarget;
    
    UPROPERTY(EditAnywhere)
    FBox FixedBounds;
    
    UPROPERTY()
    int32 MinDetailLevel;
    
    UPROPERTY()
    int32 MaxDetailLevel;
    
    UPROPERTY()
    FNiagaraDetailsLevelScaleOverrides GlobalSpawnCountScaleOverrides;
    
    UPROPERTY(EditAnywhere)
    FNiagaraPlatformSet Platforms;
    
    UPROPERTY(EditAnywhere)
    FNiagaraEmitterScalabilityOverrides ScalabilityOverrides;
    
    UPROPERTY(EditAnywhere)
    uint8 bInterpolatedSpawning: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bFixedBounds: 1;
    
    UPROPERTY()
    uint8 bUseMinDetailLevel: 1;
    
    UPROPERTY()
    uint8 bUseMaxDetailLevel: 1;
    
    UPROPERTY()
    uint8 bOverrideGlobalSpawnCountScale: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bRequiresPersistentIDs: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float MaxDeltaTimePerTick;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint32 DefaultShaderStageIndex;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint32 MaxUpdateIterations;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TSet<uint32> SpawnStages;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bSimulationStagesEnabled: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bDeprecatedShaderStagesEnabled: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bLimitDeltaTime: 1;
    
private:
    UPROPERTY()
    FString UniqueEmitterName;
    
    UPROPERTY()
    TArray<UNiagaraRendererProperties*> RendererProperties;
    
    UPROPERTY(EditAnywhere)
    TArray<FNiagaraEventScriptProperties> EventHandlerScriptProps;
    
    UPROPERTY()
    TArray<UNiagaraSimulationStageBase*> SimulationStages;
    
    UPROPERTY()
    UNiagaraScript* GPUComputeScript;
    
    UPROPERTY()
    TArray<FName> SharedEventGeneratorIds;
    
public:
    UNiagaraEmitter();
};

