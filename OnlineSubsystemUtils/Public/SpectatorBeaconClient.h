#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconClient.h"
#include "SpectatorReservation.h"
#include "ESpectatorClientRequestType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "ESpectatorReservationResult.h"
#include "SpectatorBeaconClient.generated.h"

UCLASS(NonTransient)
class ONLINESUBSYSTEMUTILS_API ASpectatorBeaconClient : public AOnlineBeaconClient {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString DestSessionId;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSpectatorReservation PendingReservation;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ESpectatorClientRequestType requestType;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bPendingReservationSent;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bCancelReservation;
    
public:
    ASpectatorBeaconClient();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReservationRequest(const FString& sessionId, const FSpectatorReservation& Reservation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCancelReservationRequest(const FUniqueNetIdRepl& Spectator);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSendReservationUpdates(int32 NumRemainingReservations);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSendReservationFull();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReservationResponse(TEnumAsByte<ESpectatorReservationResult::Type> ReservationResponse);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCancelReservationResponse(TEnumAsByte<ESpectatorReservationResult::Type> ReservationResponse);
    
};

