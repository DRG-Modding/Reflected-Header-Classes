#pragma once
#include "CoreMinimal.h"
#include "CloudLoadRequest.generated.h"

USTRUCT()
struct FCloudLoadRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString SteamTicket;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString PSTicket;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString Branch;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 Offset;
    
    FSD_API FCloudLoadRequest();
};

