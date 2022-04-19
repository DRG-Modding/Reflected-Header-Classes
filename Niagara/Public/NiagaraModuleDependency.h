#pragma once
#include "CoreMinimal.h"
#include "ENiagaraModuleDependencyType.h"
#include "ENiagaraModuleDependencyScriptConstraint.h"
#include "NiagaraModuleDependency.generated.h"

USTRUCT()
struct FNiagaraModuleDependency {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraModuleDependencyType Type;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraModuleDependencyScriptConstraint ScriptConstraint;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    NIAGARA_API FNiagaraModuleDependency();
};

