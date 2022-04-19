#pragma once
#include "CoreMinimal.h"
#include "FSDServerListRequest.h"
#include "FSDSteamServerListRequest.generated.h"

USTRUCT()
struct FFSDSteamServerListRequest : public FFSDServerListRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString SteamTicket;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString SteamPingLoc;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<int32> GameTypes;
    
    FSD_API FFSDSteamServerListRequest();
};

