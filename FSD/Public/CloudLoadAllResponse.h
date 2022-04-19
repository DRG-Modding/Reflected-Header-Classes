#pragma once
#include "CoreMinimal.h"
#include "CloudLoadEntry.h"
#include "CloudLoadAllResponse.generated.h"

USTRUCT()
struct FCloudLoadAllResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FCloudLoadEntry> savegames;
    
    FSD_API FCloudLoadAllResponse();
};

