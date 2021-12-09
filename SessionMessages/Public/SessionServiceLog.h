#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "SessionServiceLog.generated.h"

USTRUCT()
struct FSessionServiceLog {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Category;
    
    UPROPERTY(EditAnywhere)
    FString Data;
    
    UPROPERTY(EditAnywhere)
    FGuid InstanceId;
    
    UPROPERTY(EditAnywhere)
    double TimeSeconds;
    
    UPROPERTY(EditAnywhere)
    uint8 Verbosity;
    
    SESSIONMESSAGES_API FSessionServiceLog();
};

