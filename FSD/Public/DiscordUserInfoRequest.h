#pragma once
#include "CoreMinimal.h"
#include "DiscordUserInfoRequest.generated.h"

USTRUCT()
struct FDiscordUserInfoRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    FSD_API FDiscordUserInfoRequest();
};

