#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariable.h"
#include "NiagaraDataSetCompiledData.h"
#include "NiagaraEmitterCompiledData.generated.h"

USTRUCT()
struct FNiagaraEmitterCompiledData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FName> SpawnAttributes;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNiagaraVariable EmitterSpawnIntervalVar;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNiagaraVariable EmitterInterpSpawnStartDTVar;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNiagaraVariable EmitterSpawnGroupVar;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNiagaraVariable EmitterAgeVar;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNiagaraVariable EmitterRandomSeedVar;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNiagaraVariable EmitterInstanceSeedVar;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNiagaraVariable EmitterTotalSpawnedParticlesVar;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNiagaraDataSetCompiledData DataSetCompiledData;
    
    NIAGARA_API FNiagaraEmitterCompiledData();
};

