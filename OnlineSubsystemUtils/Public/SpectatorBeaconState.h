#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "SpectatorReservation.h"
#include "SpectatorBeaconState.generated.h"

UCLASS(NotPlaceable, Transient)
class ONLINESUBSYSTEMUTILS_API USpectatorBeaconState : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FName SessionName;
    
    UPROPERTY(Transient)
    int32 NumConsumedReservations;
    
    UPROPERTY(Transient)
    int32 MaxReservations;
    
    UPROPERTY(Config)
    bool bRestrictCrossConsole;
    
    UPROPERTY(Transient)
    TArray<FSpectatorReservation> Reservations;
    
public:
    USpectatorBeaconState();
};

