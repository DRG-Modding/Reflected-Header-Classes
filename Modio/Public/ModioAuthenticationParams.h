#pragma once
#include "CoreMinimal.h"
#include "ModioAuthenticationParams.generated.h"

USTRUCT(BlueprintType)
struct MODIO_API FModioAuthenticationParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    FString AuthToken;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    FString UserEmail;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    bool bUserHasAcceptedTerms;
    
    FModioAuthenticationParams();
};

