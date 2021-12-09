#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine UniqueNetIdRepl
#include "OnlineBeaconClient.h"
#include "SpectatorReservation.h"
#include "ESpectatorReservationResult.h"
#include "ESpectatorClientRequestType.h"
#include "SpectatorBeaconClient.generated.h"

UCLASS(NonTransient)
class ONLINESUBSYSTEMUTILS_API ASpectatorBeaconClient : public AOnlineBeaconClient {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FString DestSessionId;
    
    UPROPERTY()
    FSpectatorReservation PendingReservation;
    
    UPROPERTY()
    ESpectatorClientRequestType requestType;
    
    UPROPERTY()
    bool bPendingReservationSent;
    
    UPROPERTY()
    bool bCancelReservation;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerReservationRequest(const FString& sessionId, const FSpectatorReservation& Reservation);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCancelReservationRequest(const FUniqueNetIdRepl& Spectator);
    
public:
    UFUNCTION(Client, Reliable)
    void ClientSendReservationUpdates(int32 NumRemainingReservations);
    
    UFUNCTION(Client, Reliable)
    void ClientSendReservationFull();
    
    UFUNCTION(Client, Reliable)
    void ClientReservationResponse(TEnumAsByte<ESpectatorReservationResult::Type> ReservationResponse);
    
    UFUNCTION(Client, Reliable)
    void ClientCancelReservationResponse(TEnumAsByte<ESpectatorReservationResult::Type> ReservationResponse);
    
    ASpectatorBeaconClient();
};

