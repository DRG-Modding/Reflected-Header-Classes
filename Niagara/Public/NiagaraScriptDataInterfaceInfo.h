#pragma once
#include "CoreMinimal.h"
#include "NiagaraTypeDefinition.h"
#include "NiagaraScriptDataInterfaceInfo.generated.h"

class UNiagaraDataInterface;

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraScriptDataInterfaceInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UNiagaraDataInterface* DataInterface;
    
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    int32 UserPtrIdx;
    
    UPROPERTY()
    FNiagaraTypeDefinition Type;
    
    UPROPERTY()
    FName RegisteredParameterMapRead;
    
    UPROPERTY()
    FName RegisteredParameterMapWrite;
    
    FNiagaraScriptDataInterfaceInfo();
};

