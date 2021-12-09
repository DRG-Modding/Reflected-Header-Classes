#pragma once
#include "CoreMinimal.h"
#include "EngineServiceNotification.generated.h"

USTRUCT()
struct FEngineServiceNotification {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Text;
    
    UPROPERTY(EditAnywhere)
    double TimeSeconds;
    
    ENGINEMESSAGES_API FEngineServiceNotification();
};

