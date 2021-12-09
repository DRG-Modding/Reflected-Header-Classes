#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine OnlineEngineInterface
#include "OnlineEngineInterfaceImpl.generated.h"

UCLASS()
class ONLINESUBSYSTEMUTILS_API UOnlineEngineInterfaceImpl : public UOnlineEngineInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config)
    TMap<FName, FName> MappedUniqueNetIdTypes;
    
    UPROPERTY(Config)
    TArray<FName> CompatibleUniqueNetIdTypes;
    
    UPROPERTY(Config)
    FName VoiceSubsystemNameOverride;
    
public:
    UOnlineEngineInterfaceImpl();
};

