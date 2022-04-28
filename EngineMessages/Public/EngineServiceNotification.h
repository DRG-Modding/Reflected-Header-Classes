#pragma once
#include "CoreMinimal.h"
#include "EngineServiceNotification.generated.h"

USTRUCT(BlueprintType)
struct FEngineServiceNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    UPROPERTY(EditAnywhere)
    double TimeSeconds;
    
    ENGINEMESSAGES_API FEngineServiceNotification();
};

