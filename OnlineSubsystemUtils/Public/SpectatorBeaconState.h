#pragma once
#include "CoreMinimal.h"
#include "SpectatorReservation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SpectatorBeaconState.generated.h"

UCLASS(NotPlaceable, Transient)
class ONLINESUBSYSTEMUTILS_API USpectatorBeaconState : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FName SessionName;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 NumConsumedReservations;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxReservations;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    bool bRestrictCrossConsole;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSpectatorReservation> Reservations;
    
public:
    USpectatorBeaconState();
};

