#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataSetCompiledData.h"
#include "NiagaraEventGeneratorProperties.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraEventGeneratorProperties {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 MaxEventsPerFrame;
    
    UPROPERTY()
    FName ID;
    
    UPROPERTY()
    FNiagaraDataSetCompiledData DataSetCompiledData;
    
    NIAGARA_API FNiagaraEventGeneratorProperties();
};

