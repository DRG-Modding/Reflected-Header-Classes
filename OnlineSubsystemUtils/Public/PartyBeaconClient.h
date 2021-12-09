#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine UniqueNetIdRepl
#include "OnlineBeaconClient.h"
#include "PartyReservation.h"
#include "EPartyReservationResult.h"
#include "EClientRequestType.h"
#include "PartyBeaconClient.generated.h"

UCLASS(NonTransient)
class ONLINESUBSYSTEMUTILS_API APartyBeaconClient : public AOnlineBeaconClient {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FString DestSessionId;
    
    UPROPERTY()
    FPartyReservation PendingReservation;
    
    UPROPERTY()
    EClientRequestType requestType;
    
    UPROPERTY()
    bool bPendingReservationSent;
    
    UPROPERTY()
    bool bCancelReservation;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUpdateReservationRequest(const FString& sessionId, const FPartyReservation& ReservationUpdate);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerReservationRequest(const FString& sessionId, const FPartyReservation& Reservation);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRemoveMemberFromReservationRequest(const FString& sessionId, const FPartyReservation& ReservationUpdate);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCancelReservationRequest(const FUniqueNetIdRepl& PartyLeader);
    
public:
    UFUNCTION(Client, Reliable)
    void ClientSendReservationUpdates(int32 NumRemainingReservations);
    
    UFUNCTION(Client, Reliable)
    void ClientSendReservationFull();
    
    UFUNCTION(Client, Reliable)
    void ClientReservationResponse(TEnumAsByte<EPartyReservationResult::Type> ReservationResponse);
    
    UFUNCTION(Client, Reliable)
    void ClientCancelReservationResponse(TEnumAsByte<EPartyReservationResult::Type> ReservationResponse);
    
    APartyBeaconClient();
};

