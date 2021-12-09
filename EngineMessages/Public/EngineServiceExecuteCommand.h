#pragma once
#include "CoreMinimal.h"
#include "EngineServiceExecuteCommand.generated.h"

USTRUCT()
struct FEngineServiceExecuteCommand {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Command;
    
    UPROPERTY(EditAnywhere)
    FString Username;
    
    ENGINEMESSAGES_API FEngineServiceExecuteCommand();
};

