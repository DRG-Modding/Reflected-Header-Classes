#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine UniqueNetIdRepl
#include "PlayerReservation.h"
#include "PartyReservation.generated.h"

USTRUCT(BlueprintType)
struct ONLINESUBSYSTEMUTILS_API FPartyReservation {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 TeamNum;
    
    UPROPERTY(Transient)
    FUniqueNetIdRepl PartyLeader;
    
    UPROPERTY(Transient)
    TArray<FPlayerReservation> PartyMembers;
    
    UPROPERTY(Transient)
    TArray<FPlayerReservation> RemovedPartyMembers;
    
    FPartyReservation();
};

