#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "OnlineBeaconHostObject.generated.h"

class AOnlineBeaconClient;

UCLASS(Blueprintable, NotPlaceable, Transient)
class ONLINESUBSYSTEMUTILS_API AOnlineBeaconHostObject : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString BeaconTypeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AOnlineBeaconClient> ClientBeaconActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AOnlineBeaconClient*> ClientActors;
    
public:
    AOnlineBeaconHostObject();
};

