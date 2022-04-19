#pragma once
#include "CoreMinimal.h"
#include "EngineServiceNotification.generated.h"

USTRUCT()
struct FEngineServiceNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    double TimeSeconds;
    
    ENGINEMESSAGES_API FEngineServiceNotification();
};

