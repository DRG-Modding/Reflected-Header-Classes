#pragma once
#include "CoreMinimal.h"
#include "ModioAuthenticationParams.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioAuthenticationParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, meta=(AllowPrivateAccess=true))
    FString AuthToken;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, meta=(AllowPrivateAccess=true))
    FString UserEmail;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, meta=(AllowPrivateAccess=true))
    bool bUserHasAcceptedTerms;
    
    FModioAuthenticationParams();
};

