#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "EngineServicePong.generated.h"

USTRUCT()
struct FEngineServicePong {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString CurrentLevel;
    
    UPROPERTY(EditAnywhere)
    int32 EngineVersion;
    
    UPROPERTY(EditAnywhere)
    bool HasBegunPlay;
    
    UPROPERTY(EditAnywhere)
    FGuid InstanceId;
    
    UPROPERTY(EditAnywhere)
    FString InstanceType;
    
    UPROPERTY(EditAnywhere)
    FGuid sessionId;
    
    UPROPERTY(EditAnywhere)
    float WorldTimeSeconds;
    
    ENGINEMESSAGES_API FEngineServicePong();
};

