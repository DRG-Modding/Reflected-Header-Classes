#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariableBase.h"
#include "NiagaraVariable.h"
#include "ENiagaraBindingSource.h"
#include "NiagaraVariableAttributeBinding.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraVariableAttributeBinding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNiagaraVariableBase ParamMapVariable;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNiagaraVariable DataSetVariable;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNiagaraVariable RootVariable;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ENiagaraBindingSource> BindingSourceMode;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint8 bBindingExistsOnSource: 1;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint8 bIsCachedParticleValue: 1;
    
public:
    NIAGARA_API FNiagaraVariableAttributeBinding();
};

