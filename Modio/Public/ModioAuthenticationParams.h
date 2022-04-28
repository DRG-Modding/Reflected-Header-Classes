#pragma once
#include "CoreMinimal.h"
#include "ModioAuthenticationParams.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioAuthenticationParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AuthToken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserEmail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUserHasAcceptedTerms;
    
    FModioAuthenticationParams();
};

