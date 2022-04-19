#pragma once
#include "CoreMinimal.h"
#include "FSDServerListEntryModel.h"
#include "FSDServerListResponse.generated.h"

USTRUCT()
struct FFSDServerListResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FFSDServerListEntryModel> Lobbies;
    
    FSD_API FFSDServerListResponse();
};

