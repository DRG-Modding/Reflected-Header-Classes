#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconClient.h"
#include "PartyReservation.h"
//CROSS-MODULE INCLUDE: Engine UniqueNetIdRepl
#include "EClientRequestType.h"
#include "EPartyReservationResult.h"
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
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateReservationRequest(const FString& sessionId, const FPartyReservation& ReservationUpdate);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReservationRequest(const FString& sessionId, const FPartyReservation& Reservation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRemoveMemberFromReservationRequest(const FString& sessionId, const FPartyReservation& ReservationUpdate);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCancelReservationRequest(const FUniqueNetIdRepl& PartyLeader);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSendReservationUpdates(int32 NumRemainingReservations);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSendReservationFull();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReservationResponse(TEnumAsByte<EPartyReservationResult::Type> ReservationResponse);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCancelReservationResponse(TEnumAsByte<EPartyReservationResult::Type> ReservationResponse);
    
    APartyBeaconClient();
};

