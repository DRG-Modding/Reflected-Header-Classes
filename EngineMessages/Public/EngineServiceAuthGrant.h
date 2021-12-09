#pragma once
#include "CoreMinimal.h"
#include "EngineServiceAuthGrant.generated.h"

USTRUCT()
struct FEngineServiceAuthGrant {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Username;
    
    UPROPERTY(EditAnywhere)
    FString UserToGrant;
    
    ENGINEMESSAGES_API FEngineServiceAuthGrant();
};

