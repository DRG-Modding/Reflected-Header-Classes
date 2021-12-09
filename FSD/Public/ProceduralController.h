#pragma once
#include "CoreMinimal.h"
#include "TunnelNode.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "GeneratedDebrisItem.h"
#include "EDebrisItemPass.h"
#include "RoomNode.h"
#include "PathObstacle.h"
#include "LevelGenerationCarverLists.h"
#include "GeneratedInfluenceSets.h"
#include "ProceduralController.generated.h"

UCLASS(Blueprintable)
class UProceduralController : public UActorComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_RequestTunnelData();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SendTunnelData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SendRoomData();
    
public:
    UFUNCTION(BlueprintCallable)
    void SendRequestedPLSData();
    
    UFUNCTION(BlueprintCallable)
    void SendRequestedCarverData(EDebrisItemPass pass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestPLSData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestCarverData(EDebrisItemPass pass);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivedTunnelData(const TArray<FTunnelNode>& Tunnels);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivedRoomData(int32 Seed, const TArray<FRoomNode>& Rooms, const TArray<FPathObstacle>& obstacles);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SendTunnelData(const TArray<FTunnelNode>& Tunnels);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SendRoomData(int32 Seed, const TArray<FRoomNode>& Rooms, const TArray<FPathObstacle>& obstacles);
    
protected:
    UFUNCTION(Client, Reliable)
    void Client_RecieveCarverSizes(int32 pass, int32 carverCount);
    
    UFUNCTION(Client, Reliable)
    void Client_ReceivePLSLevelCarver(int32 pass, const FLevelGenerationCarverLists& levelCarvers);
    
    UFUNCTION(Client, Reliable)
    void Client_ReceivePLSInfluencers(const FGeneratedInfluenceSets& influenceSet);
    
    UFUNCTION(Client, Reliable)
    void Client_ReceivePLSDebris(const TArray<FGeneratedDebrisItem>& levelDebris);
    
public:
    UProceduralController();
};

