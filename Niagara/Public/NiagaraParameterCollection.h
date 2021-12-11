#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "NiagaraVariable.h"
#include "NiagaraParameterCollection.generated.h"

class UNiagaraParameterCollectionInstance;

UCLASS()
class NIAGARA_API UNiagaraParameterCollection : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    FName Namespace;
    
    UPROPERTY()
    TArray<FNiagaraVariable> Parameters;
    
    UPROPERTY()
    UNiagaraParameterCollectionInstance* DefaultInstance;
    
    UPROPERTY()
    FGuid CompileId;
    
public:
    UNiagaraParameterCollection();
};

