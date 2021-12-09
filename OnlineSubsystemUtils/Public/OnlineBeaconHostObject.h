#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "OnlineBeaconHostObject.generated.h"

class AOnlineBeaconClient;

UCLASS(NotPlaceable, Transient)
class ONLINESUBSYSTEMUTILS_API AOnlineBeaconHostObject : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FString BeaconTypeName;
    
    UPROPERTY()
    TSubclassOf<AOnlineBeaconClient> ClientBeaconActorClass;
    
    UPROPERTY()
    TArray<AOnlineBeaconClient*> ClientActors;
    
public:
    AOnlineBeaconHostObject();
};

