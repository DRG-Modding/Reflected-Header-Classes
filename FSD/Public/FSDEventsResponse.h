#pragma once
#include "CoreMinimal.h"
#include "BackendNotification.h"
#include "FSDEventsResponse.generated.h"

USTRUCT()
struct FFSDEventsResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FString> ActiveEvents;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString SeasonExpirationTimeSteam;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString SeasonExpirationTimeSony;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString SeasonExpirationTimeGDK;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FBackendNotification> Notifications;
    
    FSD_API FFSDEventsResponse();
};

