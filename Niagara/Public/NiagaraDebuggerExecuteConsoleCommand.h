#pragma once
#include "CoreMinimal.h"
#include "NiagaraDebuggerExecuteConsoleCommand.generated.h"

USTRUCT()
struct NIAGARA_API FNiagaraDebuggerExecuteConsoleCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Command;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bRequiresWorld;
    
    FNiagaraDebuggerExecuteConsoleCommand();
};

