#pragma once
#include "CoreMinimal.h"
#include "EPartyReservationResult.h"
#include "OnlineBeaconClient.h"
#include "PartyReservation.h"
#include "EClientRequestType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "PartyBeaconClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class ONLINESUBSYSTEMUTILS_API APartyBeaconClient : public AOnlineBeaconClient {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DestSessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyReservation PendingReservation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EClientRequestType requestType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPendingReservationSent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCancelReservation;
    
public:
    APartyBeaconClient();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateReservationRequest(const FString& sessionId, const FPartyReservation& ReservationUpdate);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReservationRequest(const FString& sessionId, const FPartyReservation& Reservation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRemoveMemberFromReservationRequest(const FString& sessionId, const FPartyReservation& ReservationUpdate);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCancelReservationRequest(const FUniqueNetIdRepl& PartyLeader);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAddOrUpdateReservationRequest(const FString& sessionId, const FPartyReservation& Reservation);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSendReservationUpdates(int32 NumRemainingReservations);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSendReservationFull();
    
    UFUNCTION(Client, Reliable)
    void ClientReservationResponse(TEnumAsByte<EPartyReservationResult::Type> ReservationResponse);
    
    UFUNCTION(Client, Reliable)
    void ClientCancelReservationResponse(TEnumAsByte<EPartyReservationResult::Type> ReservationResponse);
    
};

