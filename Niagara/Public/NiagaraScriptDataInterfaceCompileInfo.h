#pragma once
#include "CoreMinimal.h"
#include "NiagaraTypeDefinition.h"
#include "NiagaraScriptDataInterfaceCompileInfo.generated.h"

USTRUCT()
struct NIAGARA_API FNiagaraScriptDataInterfaceCompileInfo {
    GENERATED_BODY()
public:
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
    
    UPROPERTY()
    bool bIsPlaceholder;
    
    FNiagaraScriptDataInterfaceCompileInfo();
};

