#include "PartyBeaconClient.h"

void APartyBeaconClient::ServerUpdateReservationRequest_Implementation(const FString& sessionId, const FPartyReservation& ReservationUpdate) {
}
bool APartyBeaconClient::ServerUpdateReservationRequest_Validate(const FString& sessionId, const FPartyReservation& ReservationUpdate) {
    return true;
}

void APartyBeaconClient::ServerReservationRequest_Implementation(const FString& sessionId, const FPartyReservation& Reservation) {
}
bool APartyBeaconClient::ServerReservationRequest_Validate(const FString& sessionId, const FPartyReservation& Reservation) {
    return true;
}

void APartyBeaconClient::ServerRemoveMemberFromReservationRequest_Implementation(const FString& sessionId, const FPartyReservation& ReservationUpdate) {
}
bool APartyBeaconClient::ServerRemoveMemberFromReservationRequest_Validate(const FString& sessionId, const FPartyReservation& ReservationUpdate) {
    return true;
}

void APartyBeaconClient::ServerCancelReservationRequest_Implementation(const FUniqueNetIdRepl& PartyLeader) {
}
bool APartyBeaconClient::ServerCancelReservationRequest_Validate(const FUniqueNetIdRepl& PartyLeader) {
    return true;
}

void APartyBeaconClient::ServerAddOrUpdateReservationRequest_Implementation(const FString& sessionId, const FPartyReservation& Reservation) {
}
bool APartyBeaconClient::ServerAddOrUpdateReservationRequest_Validate(const FString& sessionId, const FPartyReservation& Reservation) {
    return true;
}

void APartyBeaconClient::ClientSendReservationUpdates_Implementation(int32 NumRemainingReservations) {
}

void APartyBeaconClient::ClientSendReservationFull_Implementation() {
}

void APartyBeaconClient::ClientReservationResponse_Implementation(TEnumAsByte<EPartyReservationResult::Type> ReservationResponse) {
}

void APartyBeaconClient::ClientCancelReservationResponse_Implementation(TEnumAsByte<EPartyReservationResult::Type> ReservationResponse) {
}

APartyBeaconClient::APartyBeaconClient() {
    this->requestType = EClientRequestType::NonePending;
    this->bPendingReservationSent = false;
    this->bCancelReservation = false;
}

