#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariableWithOffset.h"
#include "NiagaraParameterStore.generated.h"

class UObject;
class UNiagaraDataInterface;

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraParameterStore {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UObject* Owner;
    
    UPROPERTY()
    TArray<FNiagaraVariableWithOffset> SortedParameterOffsets;
    
    UPROPERTY()
    TArray<uint8> ParameterData;
    
    UPROPERTY()
    TArray<UNiagaraDataInterface*> DataInterfaces;
    
    UPROPERTY()
    TArray<UObject*> UObjects;
    
public:
    FNiagaraParameterStore();
};

