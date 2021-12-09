#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariable.h"
#include "NiagaraDataSetCompiledData.h"
#include "NiagaraEmitterCompiledData.generated.h"

USTRUCT()
struct FNiagaraEmitterCompiledData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FName> SpawnAttributes;
    
    UPROPERTY()
    FNiagaraVariable EmitterSpawnIntervalVar;
    
    UPROPERTY()
    FNiagaraVariable EmitterInterpSpawnStartDTVar;
    
    UPROPERTY()
    FNiagaraVariable EmitterSpawnGroupVar;
    
    UPROPERTY()
    FNiagaraVariable EmitterAgeVar;
    
    UPROPERTY()
    FNiagaraVariable EmitterRandomSeedVar;
    
    UPROPERTY()
    FNiagaraVariable EmitterTotalSpawnedParticlesVar;
    
    UPROPERTY()
    FNiagaraDataSetCompiledData DataSetCompiledData;
    
    NIAGARA_API FNiagaraEmitterCompiledData();
};

