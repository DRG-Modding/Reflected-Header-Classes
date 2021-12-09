#pragma once
#include "CoreMinimal.h"
#include "EngineServiceAuthDeny.generated.h"

USTRUCT()
struct FEngineServiceAuthDeny {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Username;
    
    UPROPERTY(EditAnywhere)
    FString UserToDeny;
    
    ENGINEMESSAGES_API FEngineServiceAuthDeny();
};

