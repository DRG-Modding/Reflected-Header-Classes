#pragma once
#include "CoreMinimal.h"
#include "ENiagaraModuleDependencyType.h"
#include "ENiagaraModuleDependencyScriptConstraint.h"
#include "NiagaraModuleDependency.generated.h"

USTRUCT()
struct FNiagaraModuleDependency {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    FName ID;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    ENiagaraModuleDependencyType Type;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    ENiagaraModuleDependencyScriptConstraint ScriptConstraint;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    FText Description;
    
    NIAGARA_API FNiagaraModuleDependency();
};

