#pragma once
#include "CoreMinimal.h"
#include "LookupSessionResponse.generated.h"

USTRUCT()
struct FLookupSessionResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool Valid;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString LobbyId;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString P2PAddr;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 P2PPORT;
    
    FSD_API FLookupSessionResponse();
};

