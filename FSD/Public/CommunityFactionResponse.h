#pragma once
#include "CoreMinimal.h"
#include "CommunityFactionResponse.generated.h"

USTRUCT()
struct FCommunityFactionResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FString> Goals;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<float> Values;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<float> Members;
    
    FSD_API FCommunityFactionResponse();
};

